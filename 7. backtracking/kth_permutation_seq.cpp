#include<bits/stdc++.h>
using namespace std;


void recurse(vector<int>&nums, vector<int>&ans, int n, int k){
    int fact = 1;

    if(n==0){
        return;
    }

    for(int i=1; i<n; i++){
        fact*=i;
    }
    int t = k/fact;
    int num = nums[t];
    k = k%fact;
    ans.push_back(num);
    cout <<num<<endl;
    nums.erase(nums.begin()+t);

    recurse(nums, ans, n-1, k);

}

int main(){
    int n=2, k=2;
    vector<int> ans;

    vector<int>numbers;
    for(int i=1; i<=n; i++){
        numbers.push_back(i);
    }

    recurse(numbers, ans, n, k-1);
    string s = "";
    for(int i=0; i<ans.size(); i++){
        s+=to_string(ans[i]);
    }

    cout << s<< endl;
}

// wrong answer on interview bit