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

vector<int> mergeArrays(vector<vector<int>> arr) {
    vector<int> outputArr;
    
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            outputArr.push_back(arr[i][j]);
        }
    }
    
    return outputArr;
}

int main() {
    vector<vector<int>> inputArr = {{2, 5, 9, 21},
                                    {-1, 0, 2},
                                    {-10, 81, 121},
                                    {4, 6, 12, 20, 150}};

    vector<int> outputArr = mergeArrays(inputArr);

    printArray(outputArr);
    
    return 0;
}