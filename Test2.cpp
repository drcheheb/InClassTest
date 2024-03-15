#include <iostream>

using namespace std;
const string PROGNAME = "Vidya Game";
const char NORTH_CHOICE = 'W', WEST_CHOICE = 'A',
    DIG_CHOICE = 'D', INVENTORY_CHOICE = 'B';
const char NORTH_CHOICE_LOWER = 'w', WEST_CHOICE_LOWER = 'a',
    DIG_CHOICE_LOWER = 'd', INVENTORY_CHOICE_LOWER = 'b';
int main (){
    char userMenuChoice;
    cout << "Welcome to " << PROGNAME << endl;

    cout << "Please enter a selection " << endl << endl;
    cout << NORTH_CHOICE << " - go north" << endl;
    cout << WEST_CHOICE << " - go west" << endl;
    cout << DIG_CHOICE << " - dig down" << endl;
    cout << INVENTORY_CHOICE << " - list inventory in bag" << endl << endl;
    cout << "Enter your menu choice" << endl;
    cin >> userMenuChoice;
    cout << "You entered: " << userMenuChoice << endl;
 
    switch (userMenuChoice){
       case NORTH_CHOICE_LOWER:
        case NORTH_CHOICE:
        cout << "Going North!" << endl;
        break;
        case WEST_CHOICE_LOWER:
        case WEST_CHOICE:
        cout << "Going West!" << endl;
        break;
        case DIG_CHOICE_LOWER:
        case DIG_CHOICE:
        cout << "Digging Down!" << endl;
        break;
        case INVENTORY_CHOICE_LOWER:
        case INVENTORY_CHOICE:
        cout << "Opening Inventory!" << endl;
        break;
        default:
        cout << "Sorry but " << userMenuChoice << " input choice is invalid" << endl;
    }

    cout << "Thank you for using " << PROGNAME << endl;
    return 0;
}