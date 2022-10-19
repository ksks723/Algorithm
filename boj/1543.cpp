#include <iostream>
#include <string>
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
    int cnt = 0;
    getline(cin, a);
    getline(cin, b);
    for (int i = 0; i < a.length(); i++)
    {
        if (a.length() - i < b.length())
            break;
        if (b == a.substr(i, b.length()))
        {
            cnt++;
            i += b.length() - 1;
        }
    }
    cout << cnt;
}
