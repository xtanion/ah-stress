#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A {1,0,-1,0,-2,2};
    int target=0;
    
    // using two pointers;
    int n=A.size();
    int i=0, j=0, k=0, l=n-1;
    set<vector<int>>out;
    sort(A.begin(), A.end());

    for(i=0; i<n; i++){
        for(j=i+1; j<n; j++){
            k = j+1;
            l = n-1;
            while(k<l){
                int sum=A[i]+A[j]+A[k]+A[l];
                cout << sum <<endl;
                if(sum>target){
                    l--;
                }else if(sum<target){
                    k++;
                }else{
                    cout << "found pair" <<endl;
                    vector<int> sol {A[i], A[j], A[k] , A[l]};
                    out.insert(sol);
                    l++;
                }
            }
        }
    }

    for(i=0; i<out.size(); i++){
        for(j=0; j<out[i].size(); j++){
            cout << out[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}