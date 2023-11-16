#include <iostream>
#include <algorithm>
#include "Book.cpp"

int main() {

    char userInput; Book bookMethods;

    Book books[3] = {
        Book("The Catcher in the Rye", "J. D. Salinger", 1951),
        Book("Frankenstein", "Mary Shelley", 1818),
        Book("Coraline", "Neil Gaiman", 2002)
    };
    

    while (true) {

        std::cout << "Enter '1' to exit or any other character to continue: ";
        std::cin >> userInput;

        std::cin.ignore();

        if (userInput == '1') { break; }

        std::string searchTitle;
        std::cout << "Enter the title of the book to search for: ";
        getline(std::cin, searchTitle);

        Book foundBook = bookMethods.findBookByTitle(books, 3, searchTitle);

        if (foundBook.getTitle() != "") {
            std::cout << "Book found:" << std::endl;
            std::cout << "Title: " << foundBook.getTitle() << std::endl;
            std::cout << "Author: " << foundBook.getAuthor() << std::endl;
            std::cout << "Year: " << foundBook.getYear() << std::endl;
        } else {
            std::cout << "Book not found" << std::endl;
        }

    }

    return 0;
}



