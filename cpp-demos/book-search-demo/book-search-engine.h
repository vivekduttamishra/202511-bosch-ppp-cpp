#pragma once
#include "bookdb.h"
#include "search-engine.h"
#include <vector>
using namespace std;

class BookSearchEngine : public SearchEngine<Book> {
private:
    const BookDB bookDB;
public:
    
    template<typename F>
    vector<Book> search(F matcher)  {
        vector<Book> results;
        for (const auto& book : bookDB.getBooks()) {
            if (matcher(book)) {
                results.push_back(book);
            }
        }
        return results;
    }
    ~BookSearchEngine() override = default;
};