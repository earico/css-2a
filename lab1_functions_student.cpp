#include <iostream>
#include <iomanip>
using namespace std;

// **********************************************************
void deposit(double amount, double& balance);
// Summary: This function increases the balance by the amount
// passed in "amount"
// Preconditions: amount is >= 0
// Postconditions: balance increased by the value in amount
// ***********************************************************
//
// ***********************************************************
void withdraw(double amount, double& balance);
// Summary: This function decreases the balance by the
// value passed in "amount"
// Preconditions: amount is >= 0 and balance >= amount.
// Postcondition: balance is decreased by the value in "amount"
// *************************************************************
//
// *************************************************************
void print_balance(double balance);
// Summary: This function prints the balance in the following
// format
//       Current Balance: $100.00
// **************************************************************
//

int main()
{
    // Formatting balance
    std::cout.setf(ios::fixed);
    std::cout.setf(ios::showpoint);
    cout.precision(2);
    double my_balance = 0.0,
           withdraw_amount = 0.0,
           deposit_amount = 0.0;
    char again = 'y',
         menu_option = 'B';
    cout << "Welcome to your simple bank account!\n";
    do{
        cout << "Please select a menu option below: \n";
        cout << "D - deposit\n";
        cout << "W - withdraw\n";
        cout << "B - print balance\n";
        cin >> menu_option;

        switch(toupper(menu_option))
        {
            case 'D':
                cout << "Enter deposit amount: $";
                cin >> deposit_amount;
                deposit(deposit_amount, my_balance);
                cout << "You deposited: $" << deposit_amount << endl;
                print_balance(my_balance);
                break;
            case 'W':
                cout << "Enter withdrawal amount: $";
                cin >> withdraw_amount;
                withdraw(withdraw_amount, my_balance);
                cout << "You withdrew: $" << withdraw_amount << endl;
                print_balance(my_balance);
                break;
            case 'B':
                print_balance(my_balance);
                break;
            default:
                cout << "Not a valid menu option. Please try again\n";
                break;
        }
        cout << "Would you like to do another transaction?Y- yes\n";
        cin >> again;
    }while(tolower(again) == 'y');
    return 0;
}
// Implementations
void deposit(double amount, double& balance)
{
  if (amount < 0){
    cout << "Amount cannot be negative!\n";
    cin >> amount;
  }
  else
    balance = balance + amount;

}
void withdraw(double amount, double& balance)
{
  if (amount < 0){
    cout << "Amount cannot be negative!\n";
    cin >> amount;
  }
  else
    balance = balance - amount;

}
void print_balance(double balance)
{
  cout << "\n === CURRENT BALANCE === \n";
  cout << "$" << balance << endl;
}
