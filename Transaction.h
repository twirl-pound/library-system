// Transaction.h

#ifndef TRANSACTION_H
#define TRANSACTION_H

#include "Book.h"
#include "Author.h"

class Transaction {
public:
    int transactionId;
    Book book;
    Author author;
    double amount;

    void displayInfo();
};

#endif
