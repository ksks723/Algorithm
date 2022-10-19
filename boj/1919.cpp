#include <iostream>
#include <algorithm>
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
    string a, b;
    cin >> a >> b;
    int alpha[26], alpha2[26], cnt = 0;
    fill_n(alpha, 26, 0);
    fill_n(alpha2, 26, 0);
    for (int i = 0; i < a.length(); i++)
    {
        alpha[a[i] - 97]++;
    }
    for (int i = 0; i < b.length(); i++)
    {
        alpha2[b[i] - 97]++;
    }
    for (int i = 0; i < 26; i++)
    {
        if (alpha[i] != alpha2[i])
            cnt += abs(alpha[i] - alpha2[i]);
    }
    cout << cnt;
}
