//
// Created by roger on 01/05/2017.
//

#ifndef MONTECARLO2_INTEGRATOR_HPP
#define MONTECARLO2_INTEGRATOR_HPP

#include "RandomNumberGenerator.hpp"


class Integrator {
    
    public:
   
    Integrator(double xLower, double xUpper, double yLower, double yUpper);
    
    double integrate();
    
    private:
    
    RandomNumberGenerator m_xGenerator;
    RandomNumberGenerator m_yGenerator;
    int m_iterations;
    double m_underCurve;
    double m_xValue;
    double m_yValue;
    double m_area;
    double m_rectangle;
    
    void calcAreaUnderCurve();
    void calcRectangle(double xLower, double xUpper, double yLower, double yUpper);
    
    bool function(double x, double y);
};


#endif //MONTECARLO2_INTEGRATOR_HPP
