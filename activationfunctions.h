#ifndef ACTIVATIONFUNCTIONS_H
#define ACTIVATIONFUNCTIONS_H

/**
 * @class ActivationFunctions
 * @brief Stellt Aktivierungsfunktionen bereit
 */
class ActivationFunctions
{
public:
    ActivationFunctions();

    ///@brief Qutscht einen übergebenen Wert ein Intervall zwischn [0,1]
    static double sigmoid(double input);
};

#endif // ACTIVATIONFUNCTIONS_H
