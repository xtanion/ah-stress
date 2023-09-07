#include<bits/stdc++.h>
using namespace std;

int main(){
    // make adj list
    string beginword = "hit";
    string endword = "cog";
    vector<string>wordlist{"hot","dot","dog","lot","log","cog"};
    vector<vector<string>>ans;
    
    queue<pair<string, int>> q;
    q.push({beginword, 1});
    map<string, int>mp;
    for (auto it: wordlist) mp[it]=1;
    while(!q.empty()){
        string word = q.front().first;
        int steps = q.front().second;
        q.pop();
        mp.erase(word);
        vector<string>tmp;
        tmp.push_back(word);

        if(word==endword){
            cout << steps <<endl;
            return steps;
        }
        for(int i=0; i<word.size(); i++){
            char original = word[i];
            vector<int>copy(tmp);
            for(char ch='a'; ch<='z'; ch++){
                word[i]=ch;

                if(mp.find(word) != mp.end()){
                    mp.erase(word);
                    q.push({word, steps+1});
                    copy.push_back(word);
                }
            }
            word[i]=original;
        }
    }
    // cout << "couldn't find" <<endl;
    return 0;
}