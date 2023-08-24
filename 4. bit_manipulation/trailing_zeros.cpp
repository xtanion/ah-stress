int solve(int A) {
    // int A = 18;
    int cnt = 0;
    while (A > 0)
    {
        if (A & 1 == 1)
        {
            break;
        }
        else
        {
            cnt++;
        }
        A = A >> 1;
    }
    // cout << cnt << endl;
    return cnt;

}

int main(){
    solve(18);
}
