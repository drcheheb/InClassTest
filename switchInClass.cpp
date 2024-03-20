#include <iostream>
using namespace std;

int main(){
    char choice;

    cout << "Enter F for false or T for true: ";
    cin >> choice;
    cout << endl;

    switch(choice){
        case 't':
        case 'T':
        cout << "You answered true" << endl;
        break;
        case 'f':
        case 'F':
        cout << "You answered false" << endl;
        break;
        default:
        cout << "Invalid Input, sorry" << endl;
    }
    return 0;
}