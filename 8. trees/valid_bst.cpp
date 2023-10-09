#include<bits/stdc++.h>
using namespace std;


void makebst(vector<int>& A, int index, int left, )

int main(){
    vector<int>A{238, 969, 350, 845, 10, 671, 593, 303, 67, 428, 492, 163, 782, 78, 534, 132, 784, 835, 400, 620, 622, 594, 277, 249, 844, 561, 38, 553, 406, 470, 8, 309, 247, 676, 922, 407, 588, 731, 158, 930, 850, 324, 625, 633, 17, 509, 744, 29, 565, 501, 600, 649, 431, 621, 659, 75, 535, 746};

    sort(A.begin(), A.end());

    for(int j=0; j<A.size(); j++){
        cout << A[j] << " ";
    }
    cout <<endl; 
    int i, prev=A[0];
    for(i=1; i<A.size(); i++){
        if(A[i]==prev) return 0;
        else{
            prev = A[i];
        }
    }
    cout << "true" <<endl;
    return 1;
}