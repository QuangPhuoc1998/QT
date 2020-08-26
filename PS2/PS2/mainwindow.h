#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDebug>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    volatile uint8_t cb_count = 0;

private slots:
    void on_btn_1_clicked();

    void on_btn_2_clicked();

    void on_lw_pressed(const QModelIndex &index);

    void on_lw_clicked(const QModelIndex &index);

    void on_cb_activated(int index);

    void on_btn_up_2_clicked();

    void on_btn_up_clicked();

    void on_btn_down_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
