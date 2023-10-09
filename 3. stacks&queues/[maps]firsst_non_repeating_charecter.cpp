#include<bits/stdc++.h>
#include <iostream>
#include <queue>
#include <stack>
using namespace std;

void Print(queue<char> A){
    queue<char> B = A;
    cout << "queue: ";
    while (!B.empty()) {
        cout << B.front() << " ";
        B.pop();
    }
    cout <<endl;
}

int main(){

    string A = "jyhrcwuengcbnuchctluxjgtxqtfvrebveewgasluuwooupcyxwgl";
    string B = "";
    queue<char> q;
    bool push = true;

    for (int i=0; i<A.size(); i++) {
        char curr = A[i];
        // st.push(curr);
        if (q.empty()) {
            B+=curr;
        }else {
            Print(q);
            while (curr == q.front()) {
                push = false;
                q.pop();
            }

            if (q.empty()) q.push('#');
            B+=q.front();
        }
        if(push) q.push(curr);
        push = true;
    }


    // int i=0, j=1, m=0;
    // while(m<A.size()){
    //     char curr = A[i];
    //     while(curr != A[j]){
    //         cout << curr <<" "<< A[j]<<endl;
    //         if (j>m) B += curr;
    //         j++;
    //     }
    //     i++;
    //     j = i+1;
    //     m = B.size();
    // }

    cout << B <<endl;
}