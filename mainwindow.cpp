#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "neuron.h"
#include <QDebug>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Test: Neuron initialization and feedforwarding
    std::vector<double> inputs;
    inputs.push_back(0.3);
    inputs.push_back(0.25);
    inputs.push_back(0.09);
    std::vector<double> weights;
    weights.push_back(1.0);
    weights.push_back(0.3);
    weights.push_back(0.0);
    Neuron n1 = Neuron(weights, 0.0);

    qDebug() << "output" <<n1.feedForward(inputs);
}

MainWindow::~MainWindow()
{
    delete ui;
}
