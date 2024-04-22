#include <iostream>
#include <fstream>
#include <string>
#include <cctype>

using namespace std;

// Function to count vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for (char ch : str) {
        if (tolower(ch) == 'a' || tolower(ch) == 'e' || tolower(ch) == 'i' || tolower(ch) == 'o' || tolower(ch) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to count words in a string
int countWords(const string& str) {
    int count = 0;
    bool inWord = false;
    for (char ch : str) {
        if (isspace(ch)) {
            inWord = false;
        } else if (!inWord) {
            count++;
            inWord = true;
        }
    }
    return count;
}

// Function to reverse a string
string Reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word in a string
string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for (char& ch : result) {
        if (isalpha(ch)) {
            if (capitalize) {
                ch = toupper(ch);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    // Open the text file
    ifstream in("advanced.txt");

    // Check if file is opened successfully
    if (!in.is_open()) {
        cerr << "Error opening file." << endl;
        return 1;
    }

    // Read the contents of the file into a string
    string fileDATA((istreambuf_iterator<char>(in)), (istreambuf_iterator<char>()));

    // Close the file
    in.close();

    // Calculate and output the number of vowels
    cout << "Number of vowels: " << countVowels(fileDATA) << endl;

    // Calculate and output the number of words
    cout << "Number of words: " << countWords(fileDATA) << endl;

    // Output the reverse of the statement
    cout << "Reversed statement: " << Reverse(fileDATA) << endl;

    // Output the statement with the second letter of each word capitalized
    cout << "Statement with second letter capitalized: " << capitalizeSecondLetter(fileDATA) << endl;

    return 0;
}