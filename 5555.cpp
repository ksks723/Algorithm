#include <bits/stdc++.h>
#include <iostream>

using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(void)
{
    fast_io();
    string findthis;
    int n, res = 0;
    cin >> findthis >> n;
    while (n--)
    {
        string str;
        cin >> str;
        str += str;                             //두개를 이어붙이면 끝과 처음에서 이어지는 문자열 찾을수있음.
        if (str.find(findthis) != string::npos) //찾는 문자가 없으면 string::npos를 리턴,있으면 인덱스.
            res++;
    }
    cout << res;
}