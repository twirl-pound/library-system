// Author.cpp

#include <iostream>
#include "Author.h"

void Author::displayInfo() {
    std::cout << "Author ID: " << authorId << std::endl;
    std::cout << "Name: " << name << std::endl;
    std::cout << "Email: " << email << std::endl;
}
