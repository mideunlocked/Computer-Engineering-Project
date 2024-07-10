#include <iostream>

// Function to calculate hydrostatic pressure
double calculateHydrostaticPressure(double P0, double rho, double g, double h) {
    return P0 + (rho * g * h);
}

int main() {
    double P0, rho, g = 9.81, h;

    // Get user inputs
    std::cout << "Enter the atmospheric pressure at the surface (P0) in Pascals: ";
    std::cin >> P0;
    std::cout << "Enter the density of the fluid (rho) in kg/m^3: ";
    std::cin >> rho;
    std::cout << "Enter the depth (h) in meters: ";
    std::cin >> h;

    // Calculate the hydrostatic pressure
    double pressure = calculateHydrostaticPressure(P0, rho, g, h);

    // Display the result
    std::cout << "The hydrostatic pressure at a depth of " << h << " meters is " << pressure << " Pascals." << std::endl;

    return 0;
}
