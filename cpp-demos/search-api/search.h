#pragma once
#include <vector>
#include <functional>
using namespace std;


template<typename T>
vector<T> search(vector<T>&data, function<bool(T)> match){
    vector<T> result;
    for(const auto& item: data){
        if(match(data)){
            result.push_back(item);
        }
    }
    return result;
}