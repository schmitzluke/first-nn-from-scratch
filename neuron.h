#ifndef NEURON_H
#define NEURON_H

#include <vector>

/**
 * @class Neuron
 * @brief Repräsentiert eine Klasse mit 3 Inputs (Größe in cm, Gewicht in kg und Schuhgröße),
 * die jeweiligen weights und ein bias.
 * @param m_inputs Eingabenvector (1: Größe, 2: Gewicht, 3:Schuhgröße)
 * @param m_weigths Gewichtungen der Inputs
 * @param m_b bias
 */
class Neuron
{
public:
    Neuron(std::vector<double> weights,double b);

    /// @brief inputs are multiplied by weights and all together added by bias and passed through sigmoid function
    /// to squish output in [0,1] intervall
    double feedForward(std::vector<double> inputs);

private:
    std::vector<double>m_inputs;
    std::vector<double>m_weights;
    double m_b;
};

#endif // NEURON_H
