#include "neuron.h"
#include "activationfunctions.h"
#include "QMessageBox"


Neuron::Neuron(std::vector<double> weights,double b):
    m_weights(weights), m_b(b){}

double Neuron::feedForward(std::vector<double> inputs){
    //is Input size same as weights?
    if(!(inputs.size() == m_weights.size())){
        QMessageBox::warning(nullptr,"Error", "unequal array size of inputs and weights");
        return -1;
    }

    //multiply inputs by weights
    for (int i = 0; i < inputs.size(); ++i) {
        inputs[i] *= m_weights[i];
    }

    //Add weighted Inputs and Bias together
    double sum = 0;
    for (int i = 0; i < inputs.size(); ++i) {
        sum += inputs[i];
    }

    sum += m_b;

    //pass sum through activationfunction
    sum = ActivationFunctions::sigmoid(sum);

    return sum;
}
