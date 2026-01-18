#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "neuron.h"
#include "neuralnetwork.h"
#include <QDebug>
#include <vector>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //Test: first Layer
    std::vector<double> weights;
    weights.push_back(1.0);
    weights.push_back(0.012);
    weights.push_back(0.022);


    Neuron h1{weights, 0.032};
    Neuron h2{weights, 0.008};
    Neuron h3{weights, 1.11234};

    //Test: second Layer
    std::vector<double> weightsSecond;
    weightsSecond.push_back(0.009);
    weightsSecond.push_back(0.9);
    weightsSecond.push_back(3.215);


    Neuron h4{weightsSecond, 1.766};
    Neuron h5{weightsSecond, 0.7};
    Neuron h6{weightsSecond, 0.00726};

    Neuron o1{weightsSecond, 2.637};

    //setup NN
    std::vector<double> inputs;
    inputs.push_back(160);
    inputs.push_back(50);
    inputs.push_back(37.5);
    NeuralNetwork NN{h1,h2,h3,h4,h5,h6,o1};
    qDebug()<<NN.feedForward(inputs);
}

MainWindow::~MainWindow()
{
    delete ui;
}
