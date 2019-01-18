#include "net/grSim_client.h"
#include "pb/grSim_Packet.pb.h"
#include "pb/grSim_Commands.pb.h"
#include "pb/grSim_Replacement.pb.h"


GrSim_Client::GrSim_Client(QObject *parent) :
    QObject(parent)
{
    // create a QUDP socket
    socket = new QUdpSocket(this);

    this->_addr.setAddress("127.0.0.1");
    this->_port = quint16(20011);

    socket->bind(this->_addr, this->_port);
    connect(socket, SIGNAL(readyRead()), this, SLOT(readyRead()));
}

void GrSim_Client::sendCommand(double velX,double velY,bool velT,bool yellow, int id,int kickx, int kicky){
    float zero = 0.0;
    grSim_Packet packet;
    packet.mutable_commands()->set_isteamyellow(yellow);
    packet.mutable_commands()->set_timestamp(0.0);
    grSim_Robot_Command* command = packet.mutable_commands()->add_robot_commands();
    command->set_id(id);

    command->set_wheelsspeed(!true);
    command->set_wheel1(5);
    command->set_wheel2(5);
    command->set_wheel3(5);
    command->set_wheel4(5);
    command->set_veltangent(velX);
    command->set_velnormal(velY);
    command->set_velangular(velT);

    command->set_kickspeedx(kickx);
    command->set_kickspeedz(kicky);
    command->set_spinner(false);


    QByteArray dgram;
    dgram.resize(packet.ByteSize());
    packet.SerializeToArray(dgram.data(), dgram.size());
    if(socket->writeDatagram(dgram, this->_addr, this->_port) > -1){

    }
}

void GrSim_Client::readyRead(){
    // when data comes in
    QByteArray buffer;
    buffer.resize(socket->pendingDatagramSize());

    QHostAddress sender;
    quint16 senderPort;

    socket->readDatagram(buffer.data(), buffer.size(),
                         &sender, &senderPort);

    qDebug() << "Message from: " << sender.toString();
    qDebug() << "Message port: " << senderPort;
    qDebug() << "Message: " << buffer;
}
