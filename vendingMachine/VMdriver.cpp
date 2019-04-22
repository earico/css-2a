#include "VendingMachine.hpp"
#include <iostream>

using namespace std;

char displayMenu();

int main()
{
    VendingMachine cafeteriaMachine;
    char choice;
    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    do{
        cout << endl;
        cafeteriaMachine.displayContents();// display items
        choice = displayMenu(); // display main menu

        switch(tolower(choice))
        {
            case 'v':
                int row,
                    col;
                cout << "Enter the row and column of the item\n";
                cin >> row >> col;
                cafeteriaMachine.viewCost(row, col);
                break;
            case 'b':
                cafeteriaMachine.purchase();
                break;
            case 'm':
                cout << "This machine's balance is: $" << cafeteriaMachine.getMoney() << endl;
                break;
            case 'q':
                cout << "Exiting Vending Machine...\n";
                break;
            default:
                cout << "Wrong input\n";
                break;
        }
    }while(tolower(choice) != 'q');

    return 0;
}
char displayMenu()
{
    char choice;
    cout << "Please enter the letter for one of the menu options below...\n";
    cout << "v - View cost of an item\n";
    cout << "b - Buy an item\n";
    cout << "m - See vending machine's balance\n";
    cout << "q - Leave Vending Machine\n";
    cin >> choice;
    return choice;
}
