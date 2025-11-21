#pragma once
#include <vector>
#include <functional>
using namespace std;


template<typename T, typename Matcher>
vector<T> search(const vector<T>&data, Matcher match){
    vector<T> result;
    for(const auto& item: data){
        if(match(item)){
            result.push_back(item);
        }
    }
    return result;
}