#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "AACECAAAA";

    int i=0, j=1, n=A.size();
    vector<int> lps;
    while (j < n)
    {
        if (A[j] == A[i]){
            lps[j] = i+1;
            j++;
            i++;
        }else{

            if(i!=0){
                i = lps[i - 1];
            }
            else
            {
                lps[i] = 0;
                j++;
            }
        }
    }
}