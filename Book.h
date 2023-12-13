// Book.h

#ifndef BOOK_H
#define BOOK_H

#include <string>

class Book {
public:
    int bookId;
    std::string title;
    std::string author;
    double price;

    void displayInfo();
};

#endif
