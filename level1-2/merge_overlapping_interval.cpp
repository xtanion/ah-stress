#include <bits/stdc++.h>
using namespace std;

struct Interval
{
    long long start;
    long long end;
};

bool mycmp(Interval a, Interval b)
{
    return a.start < b.start;
}

vector<Interval> solve(vector<Interval> A)
{
    long long i, j, start, end;
    long long n = A.size();
    struct Interval prev, current, next;
    vector<Interval> output;

    current = A[0];
    sort(A.begin(), A.end(), mycmp);
    for (i = 0; i < n; i++)
    {
        if (i<n-1){
            next = A[i + 1];
            if (current.end < next.start)
            {
                output.push_back(current);
                current = next;
            }
            else
            {
                current = {min(current.start, next.start), max(current.end, next.end)};
                // cout << current.start << next.end << endl;
            }
            // else if (next.start <= current.start){
            //     current = {next.start, max(next.end, current.end)};
            // }
        }
        else{
            output.push_back(current);
        }
    }

    return output;
}

int main()
{

    vector<Interval> A{{2, 5}, {1, 6}, {8, 16}, {15, 18}};
    // struct Interval B = {108785977, 16197462};
    vector<Interval> output;

    output = solve(A);
    for (int i = 0; i < output.size(); i++)
    {
        cout << "OUTPUT: " << output[i].start << " " << output[i].end << endl;
    }
}