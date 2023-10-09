#include<bits/stdc++.h>
#include <climits>
#include <cmath>
#include <valarray>
using namespace std;

int main(){
    // vector<int> A{4, 7, -4, 2, 2, 2, 3, -5, -3, 9, -4, 9, -7, 7, -1, 9, 9, 4, 1, -4, -2, 3, -3, -5, 4, -7, 7, 9, -4, 4, -8};
    vector<int> A{-5, 1, 4, -7, 10, -7, 0, 7, 3, 0, -2, -5, -3, -6, 4, -7, -8, 0, 4, 9, 4, 1, -8, -6, -6, 0, -9, 5, 3, -9, -5, -9, 6, 3, 8, -10, 1, -2, 2, 1, -9, 2, -3, 9, 9, -10, 0, -9, -2, 7, 0, -4, -3, 1, 6, -3};
    int B = -1;

    sort(A.begin(), A.end());
    int num, closest = B;
    int cdiff = INT_MAX, tdiff = 0;
    
    cout << "Running" <<endl;
    for(int i=0; i < A.size(); i++){
        int low = i+1, high = A.size()-1;
        while(low < high){
            num = A[i] + A[low] + A[high];
            tdiff = num - B;

            if(tdiff == 0){
                cout << "output: "<<num<<endl;
                return num;
            }else if (tdiff > 0){
                high -= 1;
            }else {
                low+=1;
            }

            if (abs(cdiff) > abs(tdiff)){
                cdiff = tdiff;
                closest = num;
            }
        }
    }
    cout <<"output: "<< closest <<endl;

    return closest;

    // if (found){
    //     return closest;
    // }else {
    //     return num;
    // }
    // return found? closest : num;
    return 0;
}