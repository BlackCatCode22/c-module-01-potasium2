#include <iostream>
using namespace std;

int getAnIntFromTheUser() {
    int userInput;
    cin >> userInput;

    return userInput;
}

// I have no idea what I'm doing for this comparison so I'm just returning the larger of the two
int compareTwoInts(int a, int b) {
    if (a > b)
        return a;
    return b;
}

int sumTwoInts(int a, int b) {
    return a + b;
}

int main() 
{
    cout << "Enter two non-decimal integers: " << endl;
    int userValOne = getAnIntFromTheUser();
    int userValTwo = getAnIntFromTheUser();

    cout << "The larger of the two values is " << compareTwoInts(userValOne, userValTwo) << endl;
    cout << "The sum of both values is " << sumTwoInts(userValOne, userValTwo) << endl;

    return 0;
}