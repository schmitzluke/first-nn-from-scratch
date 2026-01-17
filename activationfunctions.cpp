#include "activationfunctions.h"
#include <QtMath>

ActivationFunctions::ActivationFunctions() {}

double ActivationFunctions::sigmoid(double input){
    return (1/ (1 + (double)qExp(-(double)input)));
}
