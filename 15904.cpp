#include <iostream>
#include <string>
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
    string str, res = "UCPC";
    int cnt = 0;
    getline(cin, str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i]==res[cnt])
            cnt++;
    }
    if (cnt<4)
        cout << "I hate UCPC";
    else
        cout << "I love UCPC";
}