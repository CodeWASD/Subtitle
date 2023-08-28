#ifndef FILEREADER_H
#define FILEREADER_H

#include <QFile>
#include <QObject>
#include "subtitle.h"

class FileReader : public QObject
{
    Q_OBJECT
public:
    explicit   FileReader(QObject *parent = nullptr);
    void       readSubtitle(QString address);
    QVector    <SubTitle> sub_vector;
private:
    QFile        *file;
    void         getData();
    void         change_date_to_time();
    QString      date;

signals:

};

#endif // FILEREADER_H

