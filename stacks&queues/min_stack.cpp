#include <bits/stdc++.h>

using namespace std;

int first;
int minm=10000000;
vector<int> arr;

class MinStack {
    first = -1;
    // minm = 100000;
};

void MinStack::push(int x) {
    first++;
    arr[first] = x;
    minm = x<minm? x : minm;
}

void MinStack::pop() {
    if (first>0){
        first--;
    }else{
        return;
    }
}

int MinStack::top() {
    if(first>0){
        return arr[first];
    }else{
        return -1;
    }
}

int MinStack::getMin() {
    return minm;
}

