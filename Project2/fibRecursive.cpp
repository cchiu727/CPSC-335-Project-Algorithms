// Contributors: Stephanie Beccera, Collin Chiu, Brian Joh
// File name: fibRecursive.cpp
// Project 2 Part 1A

#include <iostream>

// recursive function to generate fib series
// argument n is the number of terms in the series
// returns n if n is 0 or 1, or returns next number in series
int fib(int n) {
    if (n <= 1)
        return n;
    else
        return (fib(n - 1) + fib (n - 2));
}

// USER PROMPT ======================================================
int userPrompt() {
    int num;
    std::cout << "Enter the nth term of the Fibonacci series." << std::endl;
    std::cout << "(Must be an integer n > 0): ";
    std::cin >> num;
    
    if (num < 0) {
        std::cout << "ERROR: Invalid input" << std::endl;
        userPrompt();
    }
    
    return num;
}
// ==================================================================

// MAIN FUNCTION ====================================================
int main() {
    int num = userPrompt();

    std::cout << fib(num) << std::endl;

    system("PAUSE");
    return 0;
}
// ==================================================================