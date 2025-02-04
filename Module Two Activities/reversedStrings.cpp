#include <iostream>
using namespace std;

int main() 
{
    string userInput;
    cout << "Enter a string of characters (Phrase, Setence, etc.)" << endl;
    cin >> userInput;

    string reversedInput; // I prefer this apporach as it allows the original string to still be used.
    for (int i = 0; i < userInput.length() + 1; i++) {
        reversedInput += userInput[userInput.length() - i];
    }

    cout << "The Reversed string of " << userInput << " is " << reversedInput;

    return 0;
}