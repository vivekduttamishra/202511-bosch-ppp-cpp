#include "search.h"
#include <vector>
#include <iostream>
using namespace std;

bool isPrime(int number){
    if(number <= 1) return false;
    for(int i=2; i*i <= number; ++i){
        if(number % i == 0) return false;
    }
    return true;
}



void printVector(string prompt, const vector<int>& vec){
    
    cout<< prompt << ": ";
    for(const auto& item: vec){
        cout << item << " ";
    }
    cout << endl;
}


int main(){
    vector<int> data={2, 3, 11, 8, 4, 21, 8, 19, 4, 5, 18, 12, 2, 1};

    printVector("Original Data", data);

    
    auto prime = search<int>(data, [](int number){
        return isPrime(number);
    });
    printVector("Prime Numbers", prime);

    return 0;
}

