#include "neuralnetwork.h"
#include "neuron.h"

NeuralNetwork::NeuralNetwork(Neuron h1,Neuron h2,Neuron h3,Neuron h4,Neuron h5,Neuron h6, Neuron o1):
    h1(h1), h2(h2), h3(h3), h4(h4), h5(h5), h6(h6), o1(o1){}

double NeuralNetwork::feedForward(std::vector<double> inputs){
    //send all inputs through the first hidden layer
    std::vector<double> outputsLayer1;
    outputsLayer1.push_back(h1.feedForward(inputs));
    outputsLayer1.push_back(h2.feedForward(inputs));
    outputsLayer1.push_back(h3.feedForward(inputs));

    //send all outputs from layer 1 as inputs of layer 2 through the second hidden layer
    std::vector<double> outputsLayer2;
    outputsLayer2.push_back(h4.feedForward(outputsLayer1));
    outputsLayer2.push_back(h5.feedForward(outputsLayer1));
    outputsLayer2.push_back(h6.feedForward(outputsLayer1));

    //send outputs of second layer through output neuron
    double output = o1.feedForward(outputsLayer1);
    return output;
}
