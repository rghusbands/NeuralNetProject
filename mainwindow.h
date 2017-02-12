#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QDebug>
#include <QFileDialog>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    bool in_process = false;
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:

    void on_selectImageButton_clicked();

    void on_process_clicked();

    void on_selectNNButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
