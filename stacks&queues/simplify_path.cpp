#include <bits/stdc++.h>
#include <queue>
#include <bits/stdc++.h>
#include <stack>
#include <string>
using namespace std;

string solve(string A){
    int i=0;
    string path = "";
    string temp = "";
    stack<string> split;
    int t = 0, n;

    for (int i=1; i<A.size(); i++) {
        temp = "";
        if(A[i]=='/'){
            i++;
        }

        while(A[i]!='/' && i<A.size()){
            temp+=A[i];
            i++;
        }

        if(temp=="."){
            continue;
        }
        else if (temp=="..") {
            if(split.size()>0) split.pop();
        }
        else{
            split.push(temp);
        }

    }

    int size = split.size();
    cout <<size<<endl;

    while(!split.empty())
    {
        string p=split.top();
        reverse(p.begin() , p.end());
        p.push_back('/');
        path.append(p);
        split.pop();
    }

    reverse(path.begin(),path.end());
    return path;
}

int main(){
    // string A = "/vye/../jbc/our/yvy/.././kxt/../.././kdt/./zhj/sun/zgo/jeb/../obf/bkh/";
    string A = "/uuv";
    cout << "Ans: "<< solve(A)<<endl;
}