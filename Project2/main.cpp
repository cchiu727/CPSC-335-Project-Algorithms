// Contributors: Collin Chiu, Brian Joh, Stephanie Beccera
// File name: 
#include <iostream>
#include <list>

using namespace std;

int exhPattern[14];

void exhaustivePattern()
{
    int n = 15, t1 = 0, t2 = 1, nextTerm = 0; 
    cout << "Fibonacci Series with exhaustive Pattern: ";
    for (int i = 1; i <= n; ++i) 
    {
        // Prints the first two terms.
        if (i == 1) 
        {
            cout << t1 << ", ";
            continue;
        }
        if (i == 2) 
        {
            cout << t2 << ", ";
            continue;
        }
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;

        cout << nextTerm << ", ";
    }
    cout << endl;
}

void printArray()
{
    int n = 15;
    for (size_t i = 1; i <= n; i++)
    {
        if (i == n)
        {
            cout << exhPattern[i];
        }
        else
        {
            cout << exhPattern[i] << ", ";
        }
    }
    cout << endl;
}

// main
int main()
{
    exhaustivePattern();
    printArray();

    return 0;
}
