#include <iostream>
#include <fstream>
#include <string>
#include <vector>

std::vector<std::string> concatStrings;
std::vector<std::string> targetStrings;

/*
// CLASS SUBSTRING ==================================================
class Substring {
    private:
        int index;
        std::string concatStr;
        std::string targetStrings[4];
    public:
        Substring();
        void setConcatStr();

};

Substring::Substring() {

}

void Substring::setConcatStr() {

}

// ==================================================================
*/

// ALGORITHM FUNCTIONS ==============================================

// ==================================================================

// PROGRAM FLOW FUNCTIONS =============================================
// Gets user input for file name string to open the file
std::string getFileName() {
    std::string fileName;

    std::cout << "Enter the name of the desired input file." << std::endl;
    std::cout << "(Example: inputOne.txt): ";

    std::cin >> fileName;

    return fileName;
}

void printVectors() {
    for (std::string i : concatStrings) {
        std::cout << i << " ";
    }

    for (std::string i : targetStrings) {
        std::cout << i << " ";
    }
}
// parses input line to retrieve strings from the input file
void getConcatStr(std::string s) {
    std::string concat = "";
    std::string target = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '"') {
            i++;
            for (int j = i; s[j] != '"'; j++, i++) {
                concat += s[j];
            }
            std::cout << concat << std::endl;
            concatStrings.push_back(concat);
        }
        else if (s[i] == '\'') {
            i++;
            for (int j = i; s[j] != '\''; j++, i++) {
                target += s[j];
            }
            std::cout << target << std::endl;
            targetStrings.push_back(target);
            target = "";
        }
    }
}

void getTargetStr(std::string s) {
    std::string target = "";
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '\'') {
            i++;
            for (int j = i; s[j] != '\''; j++, i++) {
                target += s[j];
            }
        }
    }

    std::cout << target << std::endl;
}

// ==================================================================

int main() {
    std::string line;
    std::string fileName = getFileName();
    std::ifstream FILE(fileName);

    while (std::getline(FILE, line)) {
        std::cout << line << std::endl;
        getConcatStr(line);

    }
    printVectors();

    system("PAUSE");
    return 0;
}