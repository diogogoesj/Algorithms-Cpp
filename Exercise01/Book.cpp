#include <iostream>
#include <algorithm>

class Book {
public:
    Book() : title(""), author(""), year(0) {}
    Book(const std::string& title, const std::string& author, int year) : title(title), author(author), year(year) {}

    std::string getTitle() const { return title; }
    std::string getAuthor() const { return author; }
    int getYear() const { return year; }

    static Book findBookByTitle(Book books[], int size, const std::string& searchTitle) 
    {

        std::string lowerSearchTitle = searchTitle;
        std::transform(lowerSearchTitle.begin(), lowerSearchTitle.end(), lowerSearchTitle.begin(), ::tolower);

        for (int i = 0; i < size; i++) 
        {
            std::string lowerTitle = books[i].getTitle();
            std::transform(lowerTitle.begin(), lowerTitle.end(), lowerTitle.begin(), ::tolower);

            if (lowerTitle == lowerSearchTitle) 
                return books[i];
        }
        return Book();
    }

private: 
    std::string title;
    std::string author;
    int year;
};

