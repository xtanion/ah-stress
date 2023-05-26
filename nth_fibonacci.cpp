#include<bits/stdc++.h>
using namespace std;

int main(){
    int A = 24;
    int i, num, cnt = 0, mult = 1;
    bool div2 = false;

    for (int i = 2; i <= A; i++)
    {
        num = i;
        if (num % 2 == 0 && div2 == false)
        {
            div2 = true;
            // mult*=i;
            cout << i << endl;
        }

        if (num % 5 == 0 && div2 == true)
        {
            div2 = false;
            // mult*=i;
            cout << i << endl;
            while (num / 5 > 0)
            {
                if (num % 5 == 0)
                {
                    num = num / 5;
                    cnt += 1;
                }
                else
                {
                    break;
                }
            }
        }
    }

    cout << cnt << endl;

    return cnt;
}