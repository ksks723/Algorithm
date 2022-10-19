#include <iostream>
#include <string.h>
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
    int a, b, c, i = 0;
    int num[10] = {
        0,
    };
    cin >> a >> b >> c;
    string str = to_string(a * b * c);
    for (char c : str)
    {
        num[c - '0']++;
    }
    for (int n : num)
    {
        cout << n << "\n";
    }
}