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

    std::vector<double> inputs;
    inputs.push_back(0.3);
    inputs.push_back(0.25);
    inputs.push_back(1.5);
    std::vector<double> weights;
    weights.push_back(1.0);
    weights.push_back(2.0);
    weights.push_back(3.0);
    Neuron n1 = Neuron(inputs, weights, 3.24);

    qDebug() << "output" <<n1.feedForward();
}

MainWindow::~MainWindow()
{
    delete ui;
}
