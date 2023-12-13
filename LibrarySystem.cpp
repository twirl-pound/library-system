// LibrarySystem.cpp

#include "Book.h"
#include "Author.h"
#include "Transaction.h"

int main() {
    // Create books
    Book book1{1, "The Catcher in the Rye", "J.D. Salinger", 25.0};
    Book book2{2, "To Kill a Mockingbird", "Harper Lee", 30.0};

    // Create authors
    Author author1{101, "Alice", "alice@example.com"};
    Author author2{102, "Bob", "bob@example.com"};

    // Create transactions
    Transaction transaction1{1001, book1, author1, 50.0};
    Transaction transaction2{1002, book2, author2, 40.0};

    // Display information
    std::cout << "Transaction Information:" << std::endl;
    transaction1.displayInfo();
    std::cout << std::endl;
    transaction2.displayInfo();

    return 0;
}
