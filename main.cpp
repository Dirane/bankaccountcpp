#include <iostream>
#include "bankAccount.h"

using namespace std;

void addNewCustomer(bankAccount accounts[], int& numCustomers);
void printCustomersData(const bankAccount accounts[], int numCustomers);

int main() {
    const int MAX_CUSTOMERS = 10;
    bankAccount accounts[MAX_CUSTOMERS];
    int numCustomers = 0;
    int choice;

    do {
        cout << "1: Enter 1 to add a new customer." << endl;
        cout << "2: Enter 2 for an existing customer." << endl;
        cout << "3: Enter 3 to print customers data." << endl;
        cout << "9: Enter 9 to exit the program." << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                addNewCustomer(accounts, numCustomers);
                break;
            case 2:
                // Functionality for an existing customer
                break;
            case 3:
                printCustomersData(accounts, numCustomers);
                break;
            case 9:
                cout << "Exiting the program." << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
                break;
        }
    } while (choice != 9);

    return 0;
}

void addNewCustomer(bankAccount accounts[], int& numCustomers) {
    if (numCustomers < 10) {
        cout << "Enter account holder's name: ";
        string name;
        cin >> name;

        cout << "Enter account type (as decimal number): ";
        double type;
        cin >> type;

        accounts[numCustomers].setAccountHolderName(name);
        accounts[numCustomers].setAccountType(type);

        cout << "Customer added successfully." << endl;

        numCustomers++;
    } else {
        cout << "Maximum number of customers reached." << endl;
    }
}

void printCustomersData(const bankAccount accounts[], int numCustomers) {
    if (numCustomers == 0) {
        cout << "No customers to display." << endl;
    } else {
        cout << "Customer data:" << endl;
        for (int i = 0; i < numCustomers; ++i) {
            cout << "Account Holder Name: " << accounts[i].getAccountHolderName() << endl;
            cout << "Account Number: " << accounts[i].getAccountNumber() << endl;
            cout << "Account Type: " << accounts[i].getAccountType() << endl;
            cout << endl;
        }
    }
}
