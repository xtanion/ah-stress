#include <algorithm>
#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> A{1, 11, 2, 3, 4, 5, 15};
    int B = 10;

    int count = 0;
    int rsum = 0;
    // sort(A.begin(), A.end());

    for(int i=0; i<A.size(); i++){
        if (A[i] < B){
            count++;
            rsum = A[i];
            for(int j =i+1; j<A.size(); j++){
                if(rsum+A[j]>=B){
                    break;
                }else{
                    count++;
                    rsum+= A[j];
                }
            }
        }
    } 

    cout << count <<endl;
    return count;
}