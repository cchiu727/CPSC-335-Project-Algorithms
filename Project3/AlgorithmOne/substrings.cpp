#include <iostream>
#include <string>

using namespace std;

// IN-PLACE SORTING ALGORITHM ======================================= 
void sortOutput(int arr[], string strArr[]) {
    int temp;
    string strTemp;

    // sorts two adjacent indices, and both move right once per iteration
    for (int i = 0; i < 4; i++) {
        for (int j = i + 1; j < 4; j++) {
            if (arr[i] > arr[j]) {
                // swaps adjacent elements
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;

                // same as above but for the string array
                strTemp = strArr[j];
                strArr[j] = strArr[i];
                strArr[i] = strTemp;
            }
        }
    }
    
    // printing indices in asc order
    cout << "[";
    for (int i = 0; i < 4; i++) {
        cout << arr[i] << ", ";
    }
    cout << "]" << endl;

    // printing target strings asc in order
    cout << "[";
    for (int i = 0; i < 4; i++) {
        cout << strArr[i] << ", ";
    }
    cout << "]" << endl;
}
// ==================================================================

// FIND TARGET STRING ALGORITHM =====================================
int findTarget(string concat, string target) {
    int index;

    // loops to parse concatenated string
    for (int i = 0; i < concat.length(); i++) {
        if (target[0] == concat[i]) { // if target first char match
            index = i;
            for (int j = 0; j < target.length(); j++, i++) { // loops to parse target string
                if (target[j] != concat[i]) { // if not a match
                    index = -1;
                    i--;
                    break;
                }
            }

            if (index != -1) { // if successful match
                return index;
            }
        }
    }

    return index; // if unsuccessful match
} 
// ==================================================================

int main() {
    string inputStr;
    string targetStr[4];
    
    // USER INPUT
    cout << "Enter the concatenated string: ";
    cin >> inputStr;

    cout << "Enter the four target strings:" << endl;
    for (int i = 0; i < 4; i++) {
        cout << "Enter target string " << i + 1 << ": ";
        cin >> targetStr[i];
    }

    // prints inputs
    cout << inputStr << endl;
    cout << "[";
    for (int i = 0; i < 4; i++) {
        cout << targetStr[i] << ", ";
    }
    cout << "]" << endl;

    // FIND TARGET WORD ALGORITHM ===================================
    int index;
    int indices[4];
    for (int i = 0; i < 4; i++) {
        index = findTarget(inputStr, targetStr[i]);

        indices[i] = index;
    }
    // ==============================================================

    // SORTING ALGORITHM ============================================
    cout << "Sorted: " << endl;
    sortOutput(indices, targetStr);
    //===============================================================
    
    return 0;
}