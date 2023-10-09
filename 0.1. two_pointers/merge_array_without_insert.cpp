#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main(){

    vector<int> A{1, 2};
    vector<int> B{-1, 2};

    // A & B are sorted already.
    
    int i = A.size()-1, j = B.size() - 1, idx = A.size() + B.size() - 1;
    for(int i=0; i<B.size(); i++){
       A.push_back(0);
    }
    while(i>=0 and j>=0){
       if(A[i]>=B[j]){
           A[idx--] = A[i--];
       }
       else{
           A[idx--] = B[j--];
       }
   }
   while(j>=0){
       A[idx--] = B[j--];
   }
   for(i=0; i<A.size(); i++){
        cout << A[i] << " " <<endl;
    }
    return 0;

}