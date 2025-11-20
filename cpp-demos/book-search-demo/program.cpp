#include <iostream>
#include "bookdb.h"
#include "book-search-engine.h"

using namespace std;

int main() {
    BookSearchEngine searchEngine;

    // Search for books by author "Vivek Dutta Mishra"
    auto results = searchEngine.search([](const Book& book) {
        return book.author == "Vivek Dutta Mishra";
    });

    cout << "Books by Vivek Dutta Mishra:" << endl;
    for (const auto& book : results) {
        cout << "- " << book.title << " (Rating: " << book.rating << ")" << endl;
    }

    return 0;
}