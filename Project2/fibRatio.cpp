// Contributors: Stephanie Beccera, Collin Chiu, Brian Joh
// Filename: fibRatio.cpp
// Project 2 Part 1B

#include <iostream>
#include <cmath>

// equation 4/5
const float phi = 1.61803;

// ALGORITHM FUNCTIONS ==============================================
// Process:
// calculate Fn but for p value
// Fn = ((pow(1 + sqrt(5)), n) - (pow(1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));
// Fn =?= Fp * pow((1 + sqrt(5)) / 2), (n - p))
// Fn+1 =?= Fn * ((1 + sqrt(5)) / 2)

// equation 3
float fSubN(int n) {
    return (pow((1 + sqrt(5)), n) - pow((1 - sqrt(5)), n)) / (pow(2, n) * sqrt(5));
}

// algorithm to generate fib list based on p and n
// p is the starting term, n is the nth term to end at
void printFibSeries(int p, int n) {
    float fSubP = fSubN(p);

    for (int i = p; i <= n; i++) {
        if (i <= 1) {
            std::cout << fSubP << ", ";
        }
        else {
        std::cout << fSubP << ", ";
        fSubP = fSubP * phi;   
        } 
    }

    std::cout << std::endl; // formatting
}

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

    printFibSeries(p, n);

    return 0;
}
// ==================================================================
