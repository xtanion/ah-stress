#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{12, 4, 6, 2};
    sort(A.begin(), A.end());

    int a = A[0], b, min=INT_MAX, temp;
    for (int i = 1; i < A.size(); i++)
    {
        b = A[i];
        // if (b/2 > a){
        //     continue;
        // }
        temp = a ^ b;
        cout << a << b << " "<< temp << endl;
        if (temp < min)
            min = temp;
        a = A[i];
    }

    cout << temp <<min<< endl;
    return min;
}