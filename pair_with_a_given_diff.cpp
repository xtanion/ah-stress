#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{-533, -666, -500, 169, 724, 478, 358, -38, -536, 705, -855, 281, -173, 961, -509, -5, 942, -173, 436, -609, -396, 902, -847, -708, -618, 421, -284, 718, 895, 447, 726, -229, 538, 869, 912, 667, -701, 35, 894, -297, 811, 322};
    int B = 369;

    B = abs(B);
    sort(A.begin(), A.end());

    int i = A.size()-1, j=0;

    for (; i > 0; i--){
        for (j=0; i>j; j++){
            if(i!=j && A[i]-A[j]==B){
                // cout << A[j] << " " << A[i] << endl;
                return 1;
            }
            if (A[i]-A[j]<B) 
                break;
        }
    }
    return false;
}
