#include <iostream>
#include "Integrator.hpp"



int main() {

    Integrator integrator(1.0, 2.0, 0.0, 8.0);
    
    std::cout << integrator.integrate() << std::endl;
    
    return 0;
}

