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
    int n, m, i = 1001, j = 1001;
    cin >> n >> m;
    while (m--)
    {
        int set, single;
        cin >> set >> single;
        i = min(i, set);
        j = min(j, single);
    }
    //(n / 6 + 1) * i   == n 만큼 세트 사기
    //n / 6 * i + n % 6 * j == n 만큼 세트사고 남은 만큼 낱개사기
    //n * j == n 만큼 낱개 사기
    cout << min((n / 6 + 1) * i, min(n / 6 * i + n % 6 * j, n * j));
}