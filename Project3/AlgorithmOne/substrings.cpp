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
    indices.(std::pair<std::string, int>(s, i));
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
    
    for (std::vector<std::string>::iterator it = v.begin(); it != v.end(); it++) { // start with word 1, iterate next after 
        std::cout << *it << std::endl;
        for (int i = 0; i < concat.length(); i++) { // loops until concatenated string is parsed through
            if ((*it)[0] == concat[i]) { // if first letter of word found
                index = i; // set index

                for (int j = 0; j < (*it).length(); j++, i++) { // loops to confirm if each letter matches
                    if ((*it)[j] == concat[i]) {} // if found, continue loop
                    else {
                        index = -1;
                        break;
                    }
                } 
                //populateMap(*it, index);
            }
        }
        populateMap(*it, index);
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