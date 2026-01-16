#include "activationfunctions.h"
#include <QtMath>

ActivationFunctions::ActivationFunctions() {}

static double sigmoid(double input){
    return (1/ 1 + (double)qExp((double)input));
}
