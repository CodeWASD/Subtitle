#include "filereader.h"
#include "QFile"
#include "mainwindow.h"
#include <QDebug>
FileReader::FileReader(QObject *parent)
    : QObject{parent}
{

}

void FileReader::readSubtitle(QString address)
{
    sub_vector.clear();
    file = new QFile(address);
    if (!file->open(QIODevice::ReadOnly | QIODevice::Text))
        return;

    while (!file->atEnd()) {
        SubTitle sub;
        QString idStr = file->readLine().trimmed();
        sub.id = idStr.toUInt();
        date = file->readLine();
        sub.change_date_to_int(date);
        while(!file->atEnd())
        {
            QString str = file->readLine();
            if(str =='\n'){
                sub_vector.append(sub);
                qDebug()<<"end block";
                break;
            }else{
                sub.text+=str;
            }
        }
    }
    file->close();
    delete file;
}

