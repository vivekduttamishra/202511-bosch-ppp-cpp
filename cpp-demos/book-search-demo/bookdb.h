#pragma once
#include "book.h"
#include <vector>
using namespace std;

class BookDB {
private:
    vector<Book> books;
public:

    BookDB(){
        //add 10 sample fiction books with real title and author and with some with repeating authors
        books.push_back({"To Kill a Mockingbird", "Harper Lee", 410, 4.8});
        books.push_back({"1984", "George Orwell", 315, 4.7});
        books.push_back({"The Accursed God","Vivek Dutta Mishra", 299, 4.5});
        books.push_back({"The Great Gatsby", "F. Scott Fitzgerald", 412, 4.6});
        books.push_back({"Manas","Vivek Dutta Mishra", 199, 4.4});
        books.push_back({"Kane and Abel", "Jeffrey Archer", 314, 4.4});
        books.push_back({"The Catcher in the Rye", "J.D. Salinger", 211, 4.5});
        books.push_back({"Pillars of the Earth", "Ken Follett", 240, 4.9});
        books.push_back({"Sons of Fortune", "Jeffrey Archer", 190, 4.3});
        books.push_back({"The Brehtren", "John Grisham", 160, 4.2});
        books.push_back({"Brave New World", "Aldous Huxley", 240, 4.1});
        books.push_back({"Summons", "John Grisham", 180, 4.0});
    }
    void addBook(const Book& book) {
        books.push_back(book);
    }
    const vector<Book>& getBooks() const {
        return books;
    }
};