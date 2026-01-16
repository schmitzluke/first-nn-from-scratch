#include "neuron.h"



Neuron::Neuron(std::vector<double> inputs, std::vector<double> weights,double b):
    m_inputs(inputs), m_weights(weights), m_b(b){}
