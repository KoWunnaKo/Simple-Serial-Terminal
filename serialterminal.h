#ifndef SERIALTERMINAL_H
#define SERIALTERMINAL_H

#include <QtSerialPort/QSerialPort>
#include <QObject>



class SerialTerminal : public QObject
{
    Q_OBJECT
public:
    SerialTerminal();
    void openSerialPort(QString comName, int baud);
    void writeToSerialPort(QString message);

public slots:

    void openSerialPortSlot(QString comName, int baud);
    void writeToSerialPortSlot(QString message);



private:

    QSerialPort *serialPort;
    QSerialPortInfo *serialPortInfo;



};

#endif // SERIALTERMINAL_H
