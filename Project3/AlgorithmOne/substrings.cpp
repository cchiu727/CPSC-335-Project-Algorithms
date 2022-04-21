#include <iostream>
#include <string>
#include <vector>
#include <map>

/*
// INPUT ARRAYS =====================================================
// ***Use this section to test different concatenated strings and target strings***
// ***Replace <CONCATENATED STRING> with your test concatenated string and <TARGET STRING> with your target strings***
// ***If there are more or less than 4 target strings, change number of elements in array in the index ([ ]) field***
std::string concatString[1] = {"<CONCATENATED STRING HERE>"};
std::string targetStrings[4] = {"<TARGET STRING>", "<TARGET STRING>", "<TARGET STRING>", "<TARGET STRING>"};
// ==================================================================
*/

std::map<std::string, int> indices;

void populateMap(std::string s, int i) {
    indices.insert(std::pair<std::string, int>(s, i));
}

void printMap() {
    std::cout<< "[";
    for (std::map<std::string, int>::iterator it = indices.begin(); it != indices.end(); it++) {
        std::cout << it->first << ", ";
    }
    std::cout << "]" << std::endl;

    std::cout << "[";    
    for (std::map<std::string, int>::iterator it = indices.begin(); it != indices.end(); it++) {
        std::cout << it->second << ",";
    }
    std::cout << "]" << std::endl;
}

// ALGORITHM FUNCTIONS ==============================================


void findTarget(std::string concat, std::vector<std::string> v) {
    int index = 0;
    bool found = false;
    
    for (std::vector<std::string>::iterator vItr = v.begin(); vItr != v.end(); vItr++) {
        for (int i = 0; i < concat.length(); i++) {
                if ((*vItr)[i] == concat[i]) {
                    index = i;
                    for (int j = 0; j < (*vItr).length(); j++, i++) {
                        if ((*vItr)[j] == concat[i]) {
                            found = true;
                        }
                        else {
                            found = false;
                            break;
                        }
                    }
                    if (found = true) {
                        populateMap(*vItr, index);
                    }    
                }
        }
    }
}
// ==================================================================


int main() {
    std::string concatString = "sanoaklandrialtofullertonmarcolongchinocoronamodestoclovissimithousand";
    std::vector<std::string> targetStrings = {"oakland", "modesto", "clovis", "corona"};

    findTarget(concatString, targetStrings);
    printMap();

    system("PAUSE");
    return 0;
}