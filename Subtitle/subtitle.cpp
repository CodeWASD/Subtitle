#include "subtitle.h"

SubTitle::SubTitle()
{

}

void SubTitle::change_date_to_int(QString date){
    QStringList list= date.split(" --> ");
    start_time = QTime::fromString(list.at(0).trimmed(),"hh:mm:ss,zzz") ;
    end_time =QTime::fromString(list.at(1).trimmed(),"hh:mm:ss,zzz") ;
}

QString SubTitle::change_to_strring() const{
    QString str{""};
    str+=("["+ QString::number(this->id)+"]");
    str+=(" "+this->start_time.toString("hh:mm:ss,zzz"));
    str+=" --> ";
    str+=(" "+ this->end_time.toString("hh:mm:ss,zzz"));
    str+=("\n"+ this->text);
    return str;

}

QString SubTitle::change_to_subtitleFormat() const{
    QString text{""};
    text+=QString::number(this->id)+'\n';
    text+=this->start_time.toString("hh:mm:ss,zzz")+" --> "+this->end_time.toString("hh:mm:ss,zzz")+"\n";
    text+=this->text+'\n';
    return text;
}

