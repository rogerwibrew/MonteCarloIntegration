#include <iostream>
#include "RandomNumberGenerator.h"

bool function(double x, double y);

int main() {

    RandomNumberGenerator xGenerator(1.0, 2.0);
    RandomNumberGenerator yGenerator(0.0, 8.0);

    int iterations{100000};
    int underCurve{0};
    double xValue{0.0};
    double yValue{0.0};

    for (int i = 0; i < iterations + 1; i++) {
        xValue = xGenerator.getRandomNumber();
        yValue = yGenerator.getRandomNumber();

        if (function(xValue, yValue))
            underCurve++;
    }

    double rectangle = 8.0;
    double Area = rectangle * (double) underCurve / (double) iterations;

    std::cout << Area << std::endl;

    return 0;
}

bool function(double x, double y) {

    double func = pow(x, 3.0);

    if(y < func)
        return true;
    return false;
}