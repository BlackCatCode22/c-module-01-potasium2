#include <iostream>
using namespace std;

int main() 
{
    double valueOne, valueTwo, valueThree;
    cout << "Enter three separate numbers" << endl;
    cin >> valueOne >> valueTwo >> valueThree;

    double largestOfThree;
    if (valueTwo > valueOne) {
        largestOfThree = valueTwo;
        if (valueThree > valueTwo){
            largestOfThree = valueThree;
        }
    }
    else {
        largestOfThree = valueOne;
        if (valueThree > valueOne){
            largestOfThree = valueThree;
        }
    }

    cout << "The largest of the three values is " << largestOfThree;

    return 0;
}