#include<bits/stdc++.h>
using namespace std;

int solve(int A, int B){
    int x, y, down=B, count=0;
    int ymax = max(B - 1, 8 - B);

    for (x = A+1, y= 1; x <= 8 && y <= ymax; x++, y++){
        if (down+y <= 8){
            // cout << "top: "<< x << down + y;
            count++;
        }

        if (down-y >=1){
            // cout << " bottom: "<< x << down - y;
            count++;
        }
        cout << endl;
    }

    down = B;
    for (x = A-1, y = 1; x >= 1 && y <= ymax; x--, y++)
    {
        if (down + y <= 8)
        {
            // cout << "top: " << x << down + y;
            count++;
        }

        if (down - y >= 1)
        {
            // cout << " bottom: " << x << down - y;
            count++;
        }
        cout << endl;
    }

    return count;
}

int main(){
    int A = 2, B = 4;
    int moves;
    moves = solve(A, B);
    cout << "result: " << moves << endl;
}