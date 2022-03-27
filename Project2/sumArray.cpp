// Contributors: Collin Chiu, Brian Joh, Stephanie Beccera

#include <iostream>
#include <list>

using namespace std;

void Subarray(int V[], int n)
{
    int b = 0;
    int e = 1;
    if (n > 2)
    {
        for (int i = 0; i < n; ++i)
        {
            for (int j = (i + 1); j < n; ++j)
            {
                if (V[i] + V[j] > V[b] + V[e])
                {
                    b = i;
                    e = j;
                    cout << "Value of e" << e << endl;
                }
            }
        }
        for (int l = b; l <= e; ++l)
        {
            if (l != e)
            {
                cout << V[l] << ", ";
            }
            else
            {
                cout << V[l] << endl;
            }
        }
    }
    else if (n != 0)
    {
        for (int k = 0; k < n; ++k)
        {
            cout << V[k];
        }
    }
    else
    {
        cout << "Empty array" << endl;
    }
}

// main
int main()
{
    int V[] = { -3, -5, 5, -1, -3, 1, 5, -6 };
    int n = sizeof(V) / sizeof(V[0]);

    Subarray(V, n);

    return 0;
}