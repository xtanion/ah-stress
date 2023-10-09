#include<bits/stdc++.h>
using namespace std;

int search(vector<int> &A, int B, int start, int end)
{
    int mid;
    if (start > end)
    {
        cout << "got?" << endl;
        return 0;
    }

    mid = (start + end) / 2;
    if (A[mid] == B)
    {
        return 1;
    }
    else if (A[mid] < B)
    {
        search(A, B, mid + 1, end);
    }
    else
    {
        search(A, B, start, mid - 1);
    }
}
int searchMatrix(vector<vector<int>> &A, int B)
{
    int start, end, mid, out = 0;
    vector<int> elem;

    start = 0, end = A.size()-1;
    while (start <= end)
    {
        mid = (start + end) / 2;
        elem = A[mid];
        cout << mid << endl;

        if (B < elem[0])
        {
            end = mid - 1;
        }
        else if (B > elem.back())
        {
            start = mid + 1;
        }
        else
        {
            out = search(elem, B, 0, elem.size()-1);
            break;
        }
    }

    return out;
}

int main(){
    vector<vector<int>> A{
            {2, 3, 4, 6 },
            {16, 19, 33, 36},
            {37, 38, 38, 41},
            {47, 47, 50, 51},
            {55, 57, 58, 62},
            {63, 65, 66, 66},
            {68, 70, 75, 77},
            {78, 84, 84, 86},
            {86, 87, 88, 92},
            {94, 95, 96, 97}};
    int B = 81;
    int out;
    out = searchMatrix(A, B);
    cout << "out: " << out << endl;
}
