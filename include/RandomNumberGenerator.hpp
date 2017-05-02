//
// Created by roger on 30/04/2017.
//

#ifndef MONTECARLO2_RANDOMNUMBERGENERATOR_H
#define MONTECARLO2_RANDOMNUMBERGENERATOR_H


#include <random>

class RandomNumberGenerator {

private:

    std::uniform_real_distribution<double> m_distribution;
    std::mt19937 m_gen;

public:

    double getRandomNumber();

    RandomNumberGenerator(double lowerLimit, double upperLimit);

};


#endif //MONTECARLO2_RANDOMNUMBERGENERATOR_H
