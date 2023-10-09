#include<bits/stdc++.h>
using namespace std;

bool custom(vector<string> A, vector<string> B){
    return (A[0] < B[0]);
}

int solve(vector<vector <string>> &A){
    int n = A.size();
    int i, cnt=1;
    string current;
    vector<int> marks, counts;

    sort(A.begin(), A.end(), custom);

    current = A[0][0];
    marks.push_back(stoi(A[0][1]));
    counts.push_back(cnt);

        for (i = 1; i < n; i++){
        if (current == A[i][0]){
            cnt++;
            marks.back()  = marks.back() + stoi(A[i][1]);
            counts.back() = cnt;
        }
        else
        {
            marks[marks.size() - 1] /= cnt;
            cnt = 1;
            current = A[i][0];
            marks.push_back(stoi(A[i][1]));
            counts.push_back(cnt);

        }
    }

    // for (i = 0; i < marks.size(); i++)
    // {
        // marks[i] = marks[i] / counts[i];
        // cout << marks[i] << endl;
    // }

    sort(marks.begin(), marks.end());
    return marks.back();
}

int main(){
    vector<vector<string>> A{{"Bob", "80"}, {"Bob", "90"}, {"Alice", "90"}};
    int out = solve(A);

    cout <<"sol: "<< out << endl;
}