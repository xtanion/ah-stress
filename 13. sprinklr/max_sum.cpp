#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{5, 4, 3, 6, 2};

    int n = A.size();
    int i = 0;
    int j = n-1, sum = 0, count=1;

    while(i<=j){
        cout << A[i] << " " << A[j] << endl;
        if (A[i] < A[j])
        {
            sum += A[i] * count;
            i++;
        }
        else
        {
            sum += A[j] * count;
            j--;
        }
        count++;
        cout << sum << endl;
    }
    cout << sum << endl;
    sum += A[i] * n;
    cout << A[i] <<" "<< sum << endl;
}