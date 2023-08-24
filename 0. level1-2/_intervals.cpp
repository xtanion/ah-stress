#include<bits/stdc++.h>
using namespace std;

struct Interval
{
    long long start;
    long long end;
};

vector<Interval>solve(vector<Interval>A, Interval B){
    long long i, j, start, end;
    struct Interval invl, new_invl;
    vector<Interval> output;

    new_invl.start = B.start;
    new_invl.end = B.end;

    if (A.size() == 0 || (B.start < A[0].start && B.end > A[A.size()-1].end)){
        output.push_back(B);
        return output;
    }

    if (B.start > A[A.size()-1].end){
        start = A.size();
        end = A.size();
    }

    for (i = 0; i < A.size(); i++){
        invl = A[i];

        if (B.end < invl.start){
            end = i;
            break;
        }

        if (B.start > invl.start){
            start = i+1;
            // break;
        }
        for (j = invl.start; j < invl.end; j++){
            if(B.start == j){
                start = i;
                new_invl.start = invl.start;
                break;
            }
            else if (B.end == j){
                end = i;
                new_invl.end = invl.end;
                break;
            }
        }
    }

    for (i = 0; i < start; i++){
        output.push_back(A[i]);
    }

    output.push_back(new_invl);

    for (i = end ; i < A.size(); i++){
        output.push_back(A[i]);
    }

    // new_invl.start = start;
    // new_invl.end = end;

    return output;
}

int main()
{

    vector<Interval> A{{13205169, 13286380}, {13478080, 14361199}, {14648047, 16875188}, {17296166, 19089625}, {20424412, 20617334}, {21947854, 23077086}, {24901000, 26346402}, {26650724, 27196856}, {28896156, 29975691}, {30071726, 31373629}, {32397799, 33159528}, {33305337, 35470848}, {92361716, 92692045}, {95399553, 97983139}, {99776803, 99818745}};
    struct Interval B = {108785977, 16197462};
    vector<Interval> output;

    output = solve(A, B);
    for (int i = 0; i < output.size(); i++)
    {
        cout << "OUTPUT: " << output[i].start << " "<< output[i].end << endl;
    }
}