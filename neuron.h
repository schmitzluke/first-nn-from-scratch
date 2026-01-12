#ifndef NEURON_H
#define NEURON_H

/**
 * @class Neuron
 * @brief Repräsentiert eine Klasse mit 3 Inputs (Größe in cm, Gewicht in kg und Schuhgröße),
 * die jeweiligen weights und ein bias.
 * @param m_height Input 1: Größe in cm
 * @param m_weight Input 2: Gewicht in kg
 * @param m_shoeSize Input 3: Schuhgröße in EU standart
 * @param m_w1 weight 1 für Größe
 * @param m_w2 weight 2 für Gewicht
 * @param m_w3 weight 3 für Schuhgröße
 * @param m_b bias
 */
class Neuron
{
public:
    Neuron(double height, double weight, double shoeSize,double w_1, double w_2, double w3,double b);

private:
    double m_height;
    double m_weight;
    double m_shoeSize;
    double m_w1;
    double m_w2;
    double m_w3;
    double m_b;
};

#endif // NEURON_H
