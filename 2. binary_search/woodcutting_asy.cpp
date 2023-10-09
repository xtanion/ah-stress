#include<bits/stdc++.h>
using namespace std;

int sum(vector<int> &A, int start, int H)
{
    int sum = 0;
    for (int i = start; i < A.size(); i++)
    {
        sum += (A[i] - H);
    }

    return sum;
}
int solve(vector<int> &A, int B)
{
    int low = 0, high = A.size() - 1, mid;
    int out, diff, t;
    sort(A.begin(), A.end());
    while (low <= high)
    {
        mid = low + (high - low) / 2;
        // cout <<"amid "<< A[mid];
        if (B > A[mid])
        {
            low = mid + 1;
        }
        else
        {
            diff = sum(A, mid, A[mid]);
            // cout << " diff " << diff << endl;
            if (diff == B)
            {
                return A[mid];
            }
            else if (diff > B)
            {
                low = mid + 1;
            }
            else
            {
                high = mid - 1;
            }
        }
    }

    // cout << low << high << endl;

    t = low;
    low = A[high];
    high = A[t];

    // while(low<=high){
    //     mid = (low + high) / 2;

    //     diff = sum(A, t, mid);

    //     cout <<" "<< low <<" "<< high <<" "<< diff << endl;
    //     if (diff == B)
    //     {
    //         return mid;
    //     }
    //     else if (B > diff)
    //     {
    //         // cout << "diff " << diff << "B " << B <<endl;
    //         high = mid - 1;
    //     }
    //     else
    //     {
    //         low = mid + 1;
    //     }
    // }
    for (int i = low; i < high; i++){
        diff = sum(A, t, i);

        cout <<"i diff "<< i <<" "<< diff << endl;
        if (diff == B)
        {
            return i;
        }
    }

    return 0;
}

int main(){
    vector<int> A{114, 55, 95, 131, 77, 111, 141};
    int B = 95;
    int out;

    out = solve(A, B);
    cout <<"sol: "<< out << endl;
}

// correct ans

// bool check(vector<int> &A, int val, int B)
// {

//     int rem = 0;

//     int n = A.size();

//     for (int i = 0; i < n; i++)
//     {

//         if (A[i] > val)
//             rem += A[i] - val;
//     }

//     if (rem >= B)
//         return true;

//     return false;
// }

// int Solution::solve(vector<int> &A, int B)
// {

//     int low = 0;

//     int high = 1000000;

//     int ans = 0;

//     while (low <= high)
//     {

//         int mid = (low + high) / 2;

//         if (check(A, mid, B))
//         {

//             ans = mid;

//             low = mid + 1;
//         }
//         else
//             high = mid - 1;
//     }

//     return ans;
// }