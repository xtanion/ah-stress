#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>A = {4, 5, 2, 10, 8};
    vector<int> B(A.size());
    stack<int> st;
    int i=0, j=0;

    st.push(-1);
    for(i=0; i<A.size(); i++){
        while(st.top()>=A[i]){
            st.pop();
        }
        B[i] = st.top();
        st.push(A[i]);
    }

    for(i=0; i<B.size(); i++){
        cout << B[i] << endl;
    }
}