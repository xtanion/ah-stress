#include<bits/stdc++.h>
using namespace std;

vector<int> found(const vector<int> &A, int mid)
{
    vector<int> out;
    int low, high;
    for (low = mid; low >= 0; low--)
    {
        if (A[low] != A[mid])
        {
            break;
        }
    }
    out.push_back(low + 1);

    for (high = mid; high < A.size(); high++)
    {
        if (A[high] != A[mid])
        {
            break;
        }
    }
    out.push_back(high - 1);
    return out;
}
vector<int> searchRange(const vector<int> &A, int B)
{
    int low = 0, high = A.size(), mid;
    vector<int> range;
    int start, end;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (A[mid] == B)
        {
            range = found(A, mid);
            return range;
        }
        else if (A[mid] < B)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    return {-1, -1};
}

int main(){
    vector<int> A{5, 7, 7, 8, 8, 9};
    int B = 8;
    vector<int> out;
    out = searchRange(A, B);
    for(auto elem: out){
        cout << "out: " << elem << endl;
    }
    return 0;
}
