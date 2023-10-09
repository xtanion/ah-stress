#include<bits/stdc++.h>
using namespace std;

int main(){

    vector<int> A{5, 6, 7, 8, 10, 3, 2, 1};
    int B = 5;

    int mid, low = 0, high = A.size() - 1;
    int split;

    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (A[mid] < A[mid + 1] && A[mid] > A[mid - 1])
        {
            low = mid + 1;
        }
        else if (A[mid] < A[mid-1] && A[mid]>A[mid + 1])
        {
            high = mid - 1;
        }else{
            split = mid;
            break;
        }
    }
    // split = 2;
    cout << "split: " << split << endl;
    low = 0;
    high = split;

    while (low <= high){
        mid = low + (high - low) / 2;

        if(B > A[mid]){
            low = mid + 1;
        }else if (B < A[mid]){
            high = mid - 1;
        }
        else{
            // cout << mid << endl;
            return mid;
        }
    }

    low = split;
    high = A.size();
    while (low <= high)
    {
        mid = low + (high - low) / 2;

        if (B < A[mid])
        {
            low = mid + 1;
        }
        else if (B > A[mid])
        {
            high = mid - 1;
        }
        else
        {
            cout << mid << endl;
            return mid;
        }
    }

    // cout << mid << endl;

    return -1;
}