#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <string>

class bankAccount {
private:
    std::string accountHolderName;
    int accountNumber;
    double accountType;

    static int nextAccountNumber;

public:
    bankAccount();
    bankAccount(std::string name, double type);
    void setAccountHolderName(std::string name);
    void setAccountType(double type);
    std::string getAccountHolderName() const;
    int getAccountNumber() const;
    double getAccountType() const;
    static void initializeAccountNumbers();
    static int getNextAccountNumber();
};

#endif
