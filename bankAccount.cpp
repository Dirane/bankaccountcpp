#include "bankAccount.h"

int bankAccount::nextAccountNumber = 1;

bankAccount::bankAccount() {
    accountNumber = nextAccountNumber++;
}

bankAccount::bankAccount(std::string name, double type) : accountHolderName(name), accountType(type) {
    accountNumber = nextAccountNumber++;
}

void bankAccount::setAccountHolderName(std::string name) {
    accountHolderName = name;
}

void bankAccount::setAccountType(double type) {
    accountType = type;
}

std::string bankAccount::getAccountHolderName() const {
    return accountHolderName;
}

int bankAccount::getAccountNumber() const {
    return accountNumber;
}

double bankAccount::getAccountType() const {
    return accountType;
}

void bankAccount::initializeAccountNumbers() {
    nextAccountNumber = 1;
}

int bankAccount::getNextAccountNumber() {
    return nextAccountNumber;
}
