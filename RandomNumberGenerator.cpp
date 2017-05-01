//
// Created by roger on 30/04/2017.
//

#include <chrono>
#include "RandomNumberGenerator.h"

RandomNumberGenerator::RandomNumberGenerator(double lowerLimit, double upperLimit) :
        m_distribution(lowerLimit, upperLimit) {
    int seed = rand();
    m_gen.seed((unsigned) seed);
}

double RandomNumberGenerator::getRandomNumber() {

    double value = m_distribution(m_gen);

    return value;
}
