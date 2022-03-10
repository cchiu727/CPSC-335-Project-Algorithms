// Contributors: Collin Chiu, Brian Joh, Stephanie Beccera
// File name: 
#include <iostream>
#include <list>

std::list<int> circleList;

// printing the list
void printList() {
    for (int n : circleList) {
        std::cout << n << ", ";
    }
    std::cout << std::endl;
}

// generating the list
void genList() {
    int num;
    std::cout << "Enter the number of items in the list (n > 0): ";
    std::cin >> num;

    int data;

    for (int i = 0; i < (2 * num); i++) {
        if (i % 2 == 0)
            data = 0;
        else
            data = 1;
        circleList.push_front(data);
    }

    std::cout << "List: \t ";
    printList();
}

// sorts list so all 0's are on left side, all 1's are on right side
void sortList() {
    int swapCount = 0;

    std::list<int>::iterator it1, it2;
    
    for (int loopCounter = 0; loopCounter < circleList.size(); loopCounter++) {
        for (it1 = circleList.begin(), it2 = it1++; it2 != circleList.end(); it1++, it2++) {
            if (*it1 == 0 && *it2 == 1) {
                std::swap(*it1, *it2);
                swapCount++;

                // output formatting
                std::cout << "Swapped: ";
                printList();
            }
            else {}
        }
    }

    std::cout << "Number of swaps: " << swapCount << std::endl;
}

// main
int main()
{
    genList();

    sortList();

    return 0;
}
