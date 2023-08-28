#ifndef SUBTITLE_H
#define SUBTITLE_H

#include <QObject>
#include <QTime>

class SubTitle
{

public:
    SubTitle();
    int     id;
    QTime   start_time;
    QTime   end_time;
    QString text;
    void change_date_to_int(QString date);

    QString change_to_strring()const;
    QString change_to_subtitleFormat()const;

signals:

};

#endif // SUBTITLE_H
