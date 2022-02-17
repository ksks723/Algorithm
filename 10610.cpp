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
    string str;
    cin >> str;
    long long sum = 0, cnt = 0;
    for (int i = 0; i < str.size();i++)
    {
        sum += str[i] - '0';
        if(str[i]-'0'==0)
            cnt++;
    }
    if(cnt)
    {
        if(sum%3)
           
            cout << -1;
        else
        {
            sort(str.begin(), str.end());
            reverse(str.begin(), str.end());
            cout << str;
        }

    }
    else
        cout << -1;
}