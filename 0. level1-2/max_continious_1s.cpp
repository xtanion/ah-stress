#include<bits/stdc++.h>
#include <iostream>
using namespace std;

int main(){
    vector<int>A = {1, 1, 0, 1, 1, 0, 0, 1, 1, 1 };
    int B = 1;

    int i=0, j=0, count=0, start=0;
    int ones = 0, zeros=0, sum=0;

    while (j<A.size()){
        // cout << A[j]<<endl;
        if(zeros<B || A[j]==1){
            if (A[j]==0) {
                zeros++;
            }else{
                ones++;
            }
            // j++;
            cout <<"pos: "<<j<<" zeros: "<<zeros<<" ones: "<<ones<<endl;
        }else{
            sum = ones+zeros;
            cout << "break" << " sum: "<< sum<<endl;
            j = j-2-ones;
            i = j+1;
            zeros = 0;
            ones = 0;
        }

        if (sum>count) {
            cout << "fuckin hell" <<endl;
            count = sum;
            start = i;
        }
        j++;
    }

    sum = ones+zeros;
    if (sum>count) {
        cout << "fuckin hell" <<endl;
        count = sum;
        start = i;
    }

    cout << count << " start: "<< start <<endl;
}