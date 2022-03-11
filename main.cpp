//
// Created by Martin Hummel on 3/11/22.
//
#include <iostream>
#include "gtest/gtest.h"
#include "src/MathCalculator.h"
int main(int argc, char *argv[])
{
    int userInput = 0;
    double radius = 0;
    double height = 0;
    MathCalculator* mathCalculator = new MathCalculator;
    std::cout << "Hello, User!" << std::endl;
    std::cout<<"Select from the list which Opertions do you want to performe" << std::endl;
    std::cout <<"Press 1 to calculate the valum from a cylinder" << std::endl;
    std::cin>> userInput;
    if(userInput == 1)
    {

        std::cout<<"Enter the height" <<std::endl;
        std::cin>> height;
        std::cout<< "Enter the radius" <<std::endl;
        std::cin>>radius;
        //double height, double radius
    //   std::cout<<"The Volume is: " << mathCalculator->calculateZylinderArea(height,radius);
    }
    return 0;
}
