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

vector<int> searchEvens(const vector<int>&data){
    vector<int> evens;
    for(const auto& item: data){
        if(item % 2 == 0){
            evens.push_back(item);
        }
    }
    return evens;
}

vector<int> searchOdds(const vector<int>&data){
    vector<int> odds;
    for(const auto& item: data){
        if(item % 2 != 0){
            odds.push_back(item);
        }
    }
    return odds;
}
vector<int> searchPrimes(const vector<int>&data){
    vector<int> primes;
    for(const auto& item: data){
        if(isPrime(item)){
            primes.push_back(item);
        }
    }
    return primes;
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

    auto even = searchEvens(data);
    printVector("Even Numbers", even);

    auto odd = searchOdds(data);
    printVector("Odd Numbers", odd);

    auto prime = searchPrimes(data);
    printVector("Prime Numbers", prime);

    return 0;
}

