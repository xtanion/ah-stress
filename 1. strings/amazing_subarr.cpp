#include<bits/stdc++.h>
using namespace std;

int main(){
    string A = "ABEC";
    int count = 0;
    for (int i = 0; i < A.size(); i++){
        char t = A[i];
        if(t=='a' || t=='e' || t=='i' || t=='o' || t=='u' ||
           t=='A' || t=='E' || t=='I' || t=='O' || t=='U')
        {
            count = count + (A.size() - i);
        }
    }
    cout << count << "\n";

    return count;
}