#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A{2, 7, 11, 15};
    int B = 9;
    vector<int>out;

    int i=0, j=A.size()-1, sum;
    sort(A.begin(), A.end());
    while(i<j){
        sum = A[i]+A[j];
        if(sum>B){
            cout << "j : "<< j<<endl;
            j--;
        }else if (sum<B){
            cout << "i : "<<i<<"sum: "<< sum <<endl;
            i++;
        }else{
            out.push_back(i);
            out.push_back(j);
            // return out;
            cout << i << j <<endl;
            break;
        }
    }

    return 0;
}