#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QGraphicsScene>
#include<string>
#include<QDebug>

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
    void on_agregarFinal_clicked();

    void on_agregarInicio_clicked();

    void on_bmostrar_clicked();

    void on_seeBox_blockCountChanged(int newBlockCount);

    void on_actionguardar_triggered();

    void on_actionCargar_triggered();

    void on_busId_clicked();

    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::MainWindow *ui;
    QGraphicsScene scene;

};
#endif // MAINWINDOW_H
