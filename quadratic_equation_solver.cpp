#include <iostream>
#include <cmath>
#include <iomanip>
#include <limits>
// Function to get valid input from the user.
bool GetInput(double &variable) {
    std::cin >> variable;
    if (std::cin.fail()) {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        return false;
    }
    return true;
}

int main() {
    double a, b, c;

    std::cout << "C++ Quadratic Equation Solver.\n";
    // Prompt user for 'a' and ensure it's a valid and non-zero value.
    std::cout << "a = ";
    while (true) {
        if (!GetInput(a)) {
            std::cout << "Please enter a valid variable for 'a' = ";
          // Check if 'a' is 0, which would not make it a quadratic equation.
        } else if (a == 0) {
            std::cout << "This is not a quadratic equation. 'a' cannot be zero. Please enter a non-zero value for 'a' = ";
        } else {
            break;
        }
    }
    // Prompt user for 'b' and ensure it's a valid value.
    std::cout << "b = ";
    while (!GetInput(b)) {
        std::cout << "Please enter a valid variable for 'b' = ";
    }
    // Prompt user for 'c' and ensure it's a valid value.
    std::cout << "c = ";
    while (!GetInput(c)) {
        std::cout << "Please enter a valid variable for 'c' = ";
    }
        
    const double delta = pow(b, 2) - 4 * a * c;
        
    std::cout << "\nDelta = " << delta << "\n";
    // Check if the discriminant is negative.
    if (delta < 0) {
        std::cout << "The equation has no real roots.\n";
    } else {
        // Using std::sqrt(delta) to calculate the roots only if delta >= 0.
        const double x1 = (-b + std::sqrt(delta)) / (2 * a);
        const double x2 = (-b - std::sqrt(delta)) / (2 * a);
                
        std::cout << std::fixed << std::setprecision(1);
        // If delta is 0, both roots are equal.
        if (delta == 0) {
            std::cout << "Both roots are equal: x1 = x2 = " << x1 << "\n";
          // Otherwise, print the two distinct roots.
        } else {
            std::cout << "x1 = " << x1 << "\n";
            std::cout << "x2 = " << x2 << "\n";
        }
    }

    return 0;
}
