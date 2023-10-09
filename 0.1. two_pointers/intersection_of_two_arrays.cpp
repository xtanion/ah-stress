#include<bits/stdc++.h>
#include <vector>
using namespace std;


int main(){
    vector<int> A{ 1, 1, 1, 3, 4, 4, 4, 7, 8, 9, 12, 14, 19, 22, 25, 26, 28, 31, 32, 34, 34, 34, 36, 36, 38, 39, 39, 39, 41, 42, 42, 43, 43, 43, 45, 45, 47, 49, 49, 50, 50, 52, 53, 54, 55, 56, 57, 60, 60, 62, 63, 65, 67, 72, 74, 74, 75, 75, 78, 78, 79, 80, 80, 80, 80, 80, 82, 83, 83, 83, 84, 85, 85, 86, 86, 86, 87, 88, 88, 88, 90, 90, 91, 92, 93, 93, 93, 96, 96, 97, 97, 98, 98, 99, 100};
    vector<int> B {13, 13, 24, 24, 27, 37, 43, 61, 61, 62, 66, 69, 69, 71, 71, 79, 87 };

    vector<int> out{};
    int i=0, j=0;

    // A & B are sorted;
    // cout << "starting"<<endl;

    while(i<A.size() || j<B.size()){
        if(A[i]==B[j]){
            // cout << "pushing:  "<<A[i]<<endl;
            out.push_back(A[i]);
            i++;
            j++;
        }else if (A[i] < B[j]) {
            // cout <<"A < B" <<endl;
            i++;
        }else{
            // cout << "B < A" <<A[i]<<B[j]<<endl;
            j++;
        }
    }
    
    for(i=0; i<out.size(); i++){
        cout << out[i] << " " <<endl;
    }
    return 0;
}