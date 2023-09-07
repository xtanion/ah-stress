#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> get_adj(){
    vector<vector<int>> arr{{}, {2, 3}, {1, 5, 6},{1, 4, 7},{3, 8},{2},{2},{3, 8},{4, 7}};

    return arr;
}

extern vector<vector<int>> adjacent = get_adj();