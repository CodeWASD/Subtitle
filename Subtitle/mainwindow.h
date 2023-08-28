#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "filereader.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:

    void on_btnStart_clicked();
    void on_list_ShowSubtitle_currentRowChanged(int currentRow);
    void on_btn_change_clicked();
    void on_btn_Save_clicked();
    void on_btn_plus_clicked();
    void on_btn_negetive_clicked();

private:
    Ui::MainWindow *ui;
    QString        m_filename;
    FileReader     reader;
    void           inserRowToList();
    void           shiftTime();
    int            i{0};
};
#endif // MAINWINDOW_H
