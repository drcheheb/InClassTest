// random number generator
// Dylan Chehebar
//generate random numbers
// March 11, 2024

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
const string PROGRAM_NAME = "Random number generator";

int main(){

    int lowVal = 50, highVal = 500;

    cout << "Welcome to " << PROGRAM_NAME << endl;

    srand (time(0)); //seed the random-number generator
   
    int aRandNum = rand();

    cout << "Your random number is " << aRandNum << endl;

    int aRandNum2 = rand();

    cout << "Your next random number is " << aRandNum2 << endl;

    //generate between 50 and 500
    int numPossibleVals = highVal - lowVal + 1;

    cout << "There are " << numPossibleVals << " values to generate between " 
    << lowVal << " and " << highVal << endl;

    int randWithMod = aRandNum % numPossibleVals;

    cout << "Random Number with modulo applied is " << randWithMod << endl;

    int finalRand = randWithMod + lowVal;

    cout << "The final random value is " << finalRand << endl;

    cout << "Thank you for using random number generator" << endl;

    return 0;
}