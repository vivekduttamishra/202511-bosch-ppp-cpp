#include <vector>
#include <string>
using namespace std;

template <typename Q, typename R>
class SearchEngine {
public:
    virtual ~SearchEngine() = default;
    virtual R search(const Q& query) = 0;
};



class StringSearchEngine : public SearchEngine<string, vector<string>> {
    //add a sample data source vector
    vector<string> dataSource = {
        "The quick brown fox",
        "jumps over the lazy dog",
        "C++ programming language",
        "Proxy design pattern example can work with cat and dog",
        "Search engine implementation"
    };    
public:
    vector<string> search(const string& query) override {
        // concrete implementation
        vector<string> results;
        for(const auto& item : dataSource) {
            if(item.find(query) != string::npos) {
                results.push_back(item);
            }
        }
        return results;
    }
};
