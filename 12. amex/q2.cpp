#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> weight{5,3,8,1,8,7,7,6};
    int U = 9, n = weight.size(), i=0, j=1;
    int count = 0;
    while (i < j && j < n)
    {
        int first = weight[i];
        int second = weight[j];

        if(first+second>U){
            count++;
            if (first >= second)
            {
                i++;
                j++;
            }else{
                j++;
            }
        }else{
            i++;
            j++;
        }
    }

    cout << count << endl;
}