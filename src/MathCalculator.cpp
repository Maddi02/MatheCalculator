#include "MathCalculator.h"
#include <iostream>
#include <cmath>


double MathCalculator::add_numbers(const double f1, const double f2) { return f1 + f2; }


double MathCalculator::calculateZylinderArea(double height, double radius){
    return pi*std::pow(radius, 2) * height;
}
