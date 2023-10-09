#include<bits/stdc++.h>
using namespace std;

int main(){
    // Find the area of the rectangle which has max diagonal. Given length[i] and width[i] as input.
    vector<int> length{2, 4, 5, 6, 9};
    vector<int> width{4, 3, 5, 1, 2};

    int max_dia = 0;
    int i=0;
    for (i = 0; i<length.size(); i++){
        int dia = length[i] * length[i] + width[i] * width[i];
        max_dia = max(max_dia, dia);
    }

    int max_area = length[i - 1] * width[i - 1];
    cout << max_area << endl;
}