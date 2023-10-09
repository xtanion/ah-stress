#include<bits/stdc++.h>
using namespace std;

int solve(vector<int> &A, int B) {
    int low=0, high=A.size()-1, mid;
    int found;
    while(low<=high){
        mid = low + (high-low)/2;
        // cout << mid <<endl;
        if(B >= A[mid]){
            low = mid+1;
        }else{
            high = mid-1;
        }
    }
    
    // cout << low <<endl;
    
    return low;
}

int main(){
    vector<int> A{1, 3, 4, 4, 6};
    int B = 4;
    solve(A, B);
}
