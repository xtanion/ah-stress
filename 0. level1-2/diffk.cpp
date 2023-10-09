#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A = {1,2, 3};
    int B = 0;

    int i=0, j=i+1;
    while(j<A.size()){
        int diff = A[j]-A[i]; 
        cout << A[j] << A[i] << endl;
        if(diff==B){
            cout << "yes" << endl;
            return 1;
        }else if(diff<B){
            j++;
        }else{
            i++;
        }
    }

    cout << "xero" << endl;
    return 0;
}