// Contributors: Stephanie Beccera, Collin Chiu, Brian Joh
// File name: fibRecursive.cpp
// Project 2 Part 1A

#include <iostream>
#include <vector>

// recursive function to generate fib series
// argument n is the number of terms in the series
// returns n if n is 0 or 1, or returns next number in series
int fib(int n) {
    if (n == 0 || n == 1)
        return n;
    else
        return (fib(n - 1) + fib (n - 2));
}

// user prompt to ask user number of terms in the series
int userPrompt() {
    int num;
    std::cout << "Enter the number of terms in the Fibonacci series." << std::endl;
    std::cout << "(Must be an integer n > 0): ";
    std::cin >> num;
    if (num < 0) {
        std::cout << "ERROR: Invalid input" << std::endl;
        userPrompt();
    }
    
    return num;
}

void printSeries(int n) {
    for (int i = 0; i < n; i++) {
        std::cout << fib(i) << ", ";
    }
}

int main() {
    int num = userPrompt();

    printSeries(num);

    return 0;
}