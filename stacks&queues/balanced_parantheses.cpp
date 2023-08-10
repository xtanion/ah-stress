#include <bits/stdc++.h>
using namespace std;

int main(){
    char* A = "((()(())))";
    int right=0;
    int i=0;
    while(A[i]!='\0'){
        if(A[i]== ')'){
            if(right==0) return 0;
            else{
                right--;
            }
        }else{
            right++;
        }
        i++;
    }

    if(right>0) return 0;
    else{
        cout << "wow" <<endl;
        return 1;
    }

}