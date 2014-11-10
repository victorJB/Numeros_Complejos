#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "complejo.h"

Complejo a;
Complejo b;
Complejo c;

using namespace std;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);
    connect(ui->Sumar_pushButton,SIGNAL(clicked()),this,SLOT(botonSuma()));
    connect(ui->Restar_pushButton,SIGNAL(clicked()),this,SLOT(botonResta()));
    connect(ui->Multiplicar_pushButton,SIGNAL(clicked()),this,SLOT(botonMultiplicacion()));
    connect(ui->Conjugado1_pushButton,SIGNAL(clicked()),this,SLOT(botonConjugado1()));
    connect(ui->Conjugado2_pushButton,SIGNAL(clicked()),this,SLOT(botonConjugado2()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::botonSuma()
{

    a.setRe(ui->Re1_lineEdit->text().toFloat());
    a.setIm(ui->Im1_lineEdit->text().toFloat());
    b.setRe(ui->Re2_lineEdit->text().toFloat());
    b.setIm(ui->Im2_lineEdit->text().toFloat());

    c.suma(a,b);

    ui->ResultadoRe_lineEdit->setText(QString::number(c.getRe()));
    ui->ResultadoIm_lineEdit->setText(QString::number(c.getIm()));
}

void MainWindow::botonResta()
{

    a.setRe(ui->Re1_lineEdit->text().toFloat());
    a.setIm(ui->Im1_lineEdit->text().toFloat());
    b.setRe(ui->Re2_lineEdit->text().toFloat());
    b.setIm(ui->Im2_lineEdit->text().toFloat());

    c.resta(a,b);

    ui->ResultadoRe_lineEdit->setText(QString::number(c.getRe()));
    ui->ResultadoIm_lineEdit->setText(QString::number(c.getIm()));
}

void MainWindow::botonMultiplicacion()
{

    a.setRe(ui->Re1_lineEdit->text().toFloat());
    a.setIm(ui->Im1_lineEdit->text().toFloat());
    b.setRe(ui->Re2_lineEdit->text().toFloat());
    b.setIm(ui->Im2_lineEdit->text().toFloat());

    c.multiplicacion(a,b);

    ui->ResultadoRe_lineEdit->setText(QString::number(c.getRe()));
    ui->ResultadoIm_lineEdit->setText(QString::number(c.getIm()));
}

void MainWindow::botonConjugado1()
{

    a.setRe(ui->Re1_lineEdit->text().toFloat());
    a.setIm(ui->Im1_lineEdit->text().toFloat());
    b.setRe(ui->Re2_lineEdit->text().toFloat());
    b.setIm(ui->Im2_lineEdit->text().toFloat());

    c.conjugado(a);

    ui->ResultadoRe_lineEdit->setText(QString::number(c.getRe()));
    ui->ResultadoIm_lineEdit->setText(QString::number(c.getIm()));
}


void MainWindow::botonConjugado2()
{

    a.setRe(ui->Re1_lineEdit->text().toFloat());
    a.setIm(ui->Im1_lineEdit->text().toFloat());
    b.setRe(ui->Re2_lineEdit->text().toFloat());
    b.setIm(ui->Im2_lineEdit->text().toFloat());

    c.conjugado(b);

    ui->ResultadoRe_lineEdit->setText(QString::number(c.getRe()));
    ui->ResultadoIm_lineEdit->setText(QString::number(c.getIm()));
}



