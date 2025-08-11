#include <iostream>
#include <limits>
using namespace std;

double withdraw(double& balance) {
    double amount;
    cout << "Enter amount to withdraw: ";
    while (!(cin >> amount)) {
        cout << "Invalid input! Please enter a valid number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter amount to withdraw: ";
    }
    if (amount > balance) {
        cout << "Insufficient funds!\n";
    } 
    else if (amount <= 0) {
        cout << "Invalid amount! Please enter a positive number.\n";
    } 
    else {  
        balance -= amount;
        cout << "Withdrawal successful!\n"; 
    }
    return balance;
}

double deposit(double& balance) {
    double amount;
    cout << "Enter amount to deposit: ";
    while (!(cin >> amount)) {
        cout << "Invalid input! Please enter a valid number.\n";
        cin.clear();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Enter amount to deposit: ";
    }
    if (amount <= 0) {
        cout << "Invalid amount! Please enter a positive number.\n";
    } 
    else {
        balance += amount;
        cout << "Deposit successful!\n"; 
    }
    return balance;
}

double balanceCheck(double balance) {
    cout << "Your current balance is: " << balance << "\n";
    return balance;
}


int main() 
{
    cout << "****************************************" << "\n";
    cout << "********Welcome to the Badi Bank********" << "\n";

    double Balance = 0;
    int Choice = 0;
    do{
        cout << "****************************************" << "\n";
        cout << "1. Deposit Money" << "\n";
        cout << "2. Withdraw Money" << "\n";
        cout << "3. Check Balance" << "\n";
        cout << "4. Exit" << "\n";
        cout << "****************************************" << "\n";
        cout << "Enter your choice: ";
        while (!(cin >> Choice)) {
            cout << "Invalid input! Please enter a number between 1 and 4.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Enter your choice: ";
        }

        switch (Choice) {
            case 1:
                deposit(Balance);
                cout << "New balance after deposit: " << Balance << "\n";
                break;
            case 2:
                withdraw(Balance);
                cout << "New balance after withdrawal: " << Balance << "\n";
                break;
            case 3:
                balanceCheck(Balance);
                break;
            case 4:
                cout << "Thank you for using Badi Bank! Goodbye!\n";
                break; 
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }while (Choice != 4);
    
    return 0;

}