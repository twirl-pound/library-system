// Transaction.cpp

#include <iostream>
#include "Transaction.h"

void Transaction::displayInfo() {
    std::cout << "Transaction ID: " << transactionId << std::endl;
    book.displayInfo();
    author.displayInfo();
    std::cout << "Amount: $" << amount << std::endl;
}
