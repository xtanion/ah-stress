#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> A{0, 1, 0, 1, 0, 0, 0, 1, 1};
    int B=3, i=0, zeros=0, cnt=0, max=0;
    while(i<A.size()){

        if(A[i]==0){
            zeros++;
            if(zeros<=B){
                cnt++;
                cout<<i<<" "<<cnt<<endl;
            }else{
                cnt=0;
                zeros=0;
            }
        }else{
            // zeros=0;
            cnt+=1;
        }
        
        max=cnt>max?cnt:max;
        i++;
    }

    cout<<"max: "<<max<<endl;
    return max;
}