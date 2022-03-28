// Contributors: Stephanie Beccera, Collin Chiu, Brian Joh
// Filename: fibRatio.cpp
// Project 2 Part 1B

#include <iostream>
#include <cmath>

// phi used in equations 4 and 5
const float phi = 1.61803;

// ALGORITHM FUNCTIONS ==============================================

// equation 3 - calculates Fn
float fSubN(int n) {
    return (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));
}

// equation 4 - calculates Fn based on Fp * phi^(n - p)
// p is starting term, n is end term marker 
void fibEqFour(int p, int n) {
    float fSubP = fSubN(p);

    std::cout << "Equation 4 Fibonacci Series: ";

    for (int i = p; i <= n; i++) {
        std::cout << fSubP << ", ";
        fSubP = fSubP * pow(phi, (i - (i - 1)));
    }

    std::cout << std::endl;
}

// equation 5 - calculates Fn+1 based on Fn
// p is starting term, n is end term marker
void fibEqFive(int p, int n) {
    float fSubP = fSubN(p);

    std::cout << "Equation 5 Fibonacci Series: ";

    for (int i = p; i <= n; i++) {
        std::cout << fSubP << ", ";
        fSubP *= phi;
    }

    std::cout << std::endl;
}
// ==================================================================

// USER PROMPTS =====================================================
int promptP() {
    int p;
    std::cout << "Enter value of p." << std::endl;
    std::cout << "(Must be a positive integer): ";
    std::cin >> p;

    if (p < 0 ) {
        std::cout << "ERROR: Invalid input" << std::endl;
        promptP();
    } 

    return p;
}

int promptN() {
    int n;
    std::cout << "Enter a value of n." << std::endl;
    std::cout << "(Must be a positive integer): ";
    std::cin >> n;

    if (n < 0) {
        std::cout << "ERROR: Invalid input" << std::endl;
        promptN();
    }

    return n;
}
// ==================================================================

// MAIN FUNCTION ====================================================
int main() {
    int p = promptP();
    int n = promptN();

    fibEqFour(p, n);

    fibEqFive(p, n);

    system("PAUSE");
    return 0;
}
// ==================================================================
