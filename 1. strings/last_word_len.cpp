#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "Hello  World  ";
    int count = 0, prev_len=0;
    bool space = false;
    for (int i = 0; i < A.size(); i++)
    {
        // count++;
        if (A[i]==' '){
            space = true;
        }else{
            space = false;
        }
        
        if (space){
            count = 0;
        }else{
            // cout << A[i] << count << endl;
            count++;
            prev_len = count;
        }
    }

    // cout << prev_len  << " "<< count <<endl;
    count = space ? prev_len : count;

    return count;
}