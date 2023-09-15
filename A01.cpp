// Name : Syed Abdur Rahman
// SSID : 1927256
// Assignment #: 1
// Submission Date : 9/14/2023
//
// I'm currently using the Microsoft Visual Studio 2023, with the C++ extension.
// 
// Program Description :
// Pass in one command-line argument eight letter lowercase word without
// spaces and create a password with the following vowel replacement rules:
// a e i o u
// @ 3 1 0 8

#include <iostream>
#include <string>

int main(int argc, char* argv[]) {
    // this checks whether the command-line argument is missing or more than one.
    if (argc < 2) {
        std::cerr << "Error: Insufficient arguments.\n";
        return -1;
    }

    // to convert null-terminated c-string in argv[1] to a C++ string.
    std::string word = argv[1];

    // Check if the length of the word is not 8
    if (word.size() != 8) {
        std::cerr << "Error: The word must be of length 8.\n";
        return -1;
    }

    // to transform the word based on vowel replacement rules.
    for (char& c : word) {
        switch (c) {
        case 'a': c = '@'; break;
        case 'e': c = '3'; break;
        case 'i': c = '1'; break;
        case 'o': c = '0'; break;
        case 'u': c = '8'; break;
            
        }
    }

    // to output the transformed word.
    std::cout << word << std::endl;

    return 0;
}
