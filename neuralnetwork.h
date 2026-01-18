#ifndef NEURALNETWORK_H
#define NEURALNETWORK_H
#include "neuron.h"
#include <vector>

/**
 * @class NeuralNetwork
 * @brief represents a neural network with 3 Inputs, 2 hidden layer and one output.
 * Executes a simple feedforwarding
 */
class NeuralNetwork
{
public:

    //hidden layer 1
    Neuron h1;
    Neuron h2;
    Neuron h3;

    //hidden layer 2
    Neuron h4;
    Neuron h5;
    Neuron h6;

    Neuron o1;

    NeuralNetwork(Neuron h1,Neuron h2,Neuron h3,
                  Neuron h4,Neuron h5,Neuron h6,
                  Neuron o1);

    double feedForward(std::vector<double> inputs);
};

#endif // NEURALNETWORK_H
