// Book.cpp

#include <iostream>
#include "Book.h"

void Book::displayInfo() {
    std::cout << "Book ID: " << bookId << std::endl;
    std::cout << "Title: " << title << std::endl;
    std::cout << "Author: " << author << std::endl;
    std::cout << "Price: $" << price << std::endl;
}
