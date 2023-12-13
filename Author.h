// Author.h

#ifndef AUTHOR_H
#define AUTHOR_H

#include <string>

class Author {
public:
    int authorId;
    std::string name;
    std::string email;

    void displayInfo();
};

#endif
