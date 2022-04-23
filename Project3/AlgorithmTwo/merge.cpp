#include <iostream>
#include <vector>

using namespace std;

void printArray(vector<int> arr) {
    cout << "{";
        for (int i = 0; i < arr.size(); i++) {
            cout << arr[i] << ", ";
        }
        cout << "}" << endl;
}

// ALGORITHM FUNCTIONS ==============================================
vector<int> sortArray(vector<int> arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            if (arr[i] > arr[j]) {
                swap(arr[i], arr[j]);
            }
        }
    }
    
    return arr;
}

vector<int> mergeArrays(vector<vector<int>> arr) {
    vector<int> outputArr;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            outputArr.push_back(arr[i][j]);
        }
    }
    
    return sortArray(outputArr);
}
// ==================================================================

int main() {
    vector<vector<int>> inputArr;
    vector<int> outputArr;

    // TEST ONE
    inputArr  = {{2, 5, 9, 21},
                {-1, 0, 2},
                {-10, 81, 121},
                {4, 6, 12, 20, 150}};
    outputArr = mergeArrays(inputArr);
    printArray(outputArr);

    // TEST TWO
    inputArr = {{10, 17, 18, 21, 29},
                {-3, 0, 3, 7, 8},
                {81, 88, 121, 131},
                {9, 11, 12, 19, 29}};
    outputArr = mergeArrays(inputArr);
    printArray(outputArr);            
    
    // TEST THREE
    inputArr = {{-4, -2, 0, 2, 7},
                {4, 6, 12, 14},
                {10, 15, 25},
                {5, 6, 10, 20, 24}};
    outputArr = mergeArrays(inputArr);
    printArray(outputArr);

    // TEST CUSTOM
    // Add any elements here separated by commas
    // To add another array, create it between brackets {} and [...]
    // [...] add a comma after the preceding array.
    inputArr = {{0, 0, 0, 0},
                {0, 0, 0, 0},
                {0, 0, 0, 0},
                {0, 0, 0, 0}};
    outputArr = mergeArrays(inputArr);
    printArray(outputArr);              
    return 0;
}
