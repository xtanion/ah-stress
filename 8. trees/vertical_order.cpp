#include<bits/stdc++.h>
#include "_template.h"
using namespace std;

void recurse(TreeNode* node, int distance, int height, map<int, vector<pair<int, int>>>& out){
    if(node==NULL) return;

    out[distance].push_back({node->val, height});
    recurse(node->left, distance-1, height+1, out);
    recurse(node->right, distance+1, height+1, out);
}

// void print_vec(vector<pair<int,int>> vec){
//     for(int i=0; i<vec.size(); i++){
//         cout << "("<< vec[i].first << " " << vec[i].second<< ") ";
//     }
// }

vector<int> elements(vector<pair<int, int>>&A){
    vector<int>t;
    for(int i=0; i<A.size(); i++){
        t.push_back(A[i].first);
    }
    return t;
}
bool cmp(pair<int, int>a, pair<int, int>b){
    if(a.second==b.second) return a.first < b.first;
    else return a.second < b.second;
}

int main(){
    vector<int>preorder{8, 2, 1, 6, 20, 15, 21};
    TreeNode* node = get_preorder(preorder);

    map<int, vector<pair<int, int>>>out;
    recurse(node, 0, 0, out);
    vector<vector<int>>ans;

    for (const auto& it:out)
    {
        vector<pair<int, int>> temp = it.second;
        sort(temp.begin(), temp.end(), cmp);
        ans.push_back(elements(temp));
        // print_vec(temp);
        // cout <<endl;
    }
}   