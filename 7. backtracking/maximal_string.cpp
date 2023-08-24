#include<bits/stdc++.h>
using namespace std;

void recurse(string &str, int i, int count, int k){
    if(count==k){
        return;
    }

    char t = str[i];
    int idx = i;
    bool ismax = true;

    for(int j=i+1; j<str.size(); j++){
        if(str[j]>=t){
            t = str[j];
            idx = j;
        }

        if(t>str[i])
            ismax = false;
    }

    if (ismax==false)
        count++;

    char tmp = str[i];
    str[i] = t;
    str[idx] = tmp;
    cout << str <<endl;
    recurse(str, i+1, count, k);
    
}

int main(){
    string str = "7599";
    int k = 2;

    recurse(str, 0, 0, k);

    cout << "final: " <<str << endl;
}