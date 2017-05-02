//
// Created by roger on 01/05/2017.
//

#include "Integrator.hpp"

Integrator::Integrator(double xLower, double xUpper, double yLower, double yUpper): 
m_xGenerator{xLower, xUpper},
m_yGenerator{yLower, yUpper},
m_iterations{1000000},
m_underCurve{0.0},
m_xValue{0.0},
m_yValue{0.0},
m_area{0.0}
{
    calcRectangle(xLower, xUpper, yLower, yUpper);
}

void Integrator::calcRectangle(double xLower, double xUpper, double yLower, double yUpper){
    
    m_rectangle = (xUpper-xLower)*(yUpper-yLower);

}

void Integrator::calcAreaUnderCurve(){
    
    for (int i = 0; i < m_iterations; i++) {
        m_xValue = m_xGenerator.getRandomNumber();
        m_yValue = m_yGenerator.getRandomNumber();

        if (function(m_xValue, m_yValue))
            m_underCurve++;
    
}
}

bool Integrator::function(double x, double y){
    
    double func = pow(x, 3.0);

    if(y < func)
        return true;
    return false;
}

double Integrator::integrate(){
    
    calcAreaUnderCurve();
    
    m_underCurve = m_rectangle * (double) m_underCurve / (double) m_iterations;
    
    return m_underCurve;
}
