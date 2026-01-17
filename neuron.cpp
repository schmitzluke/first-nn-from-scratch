#include "neuron.h"
#include "activationfunctions.h"


Neuron::Neuron(std::vector<double> inputs, std::vector<double> weights,double b):
    m_inputs(inputs), m_weights(weights), m_b(b){}

double Neuron::feedForward(){
    //multiply inputs by weights
    for (int i = 0; i < m_inputs.size(); ++i) {
        m_inputs[i] *= m_weights[i];
    }

    //Add weighted Inputs and Bias together
    double sum = 0;
    for (int i = 0; i < m_inputs.size(); ++i) {
        sum += m_inputs[i];
    }

    sum += m_b;

    //pass sum through activationfunction
    sum = ActivationFunctions::sigmoid(sum);

    return sum;
}
