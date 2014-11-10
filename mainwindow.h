#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "complejo.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:

    void botonSuma();
    void botonResta();
    void botonMultiplicacion();
    void botonConjugado1();
    void botonConjugado2();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
