#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n,leng=1,maxlen;
string str;
void lenset()
{
    if(leng>maxlen)
        maxlen = leng;
    leng = 1;
}
int main(void)
{
    fast_io();
    cin >> n >> str;
    for (int i = 1; i < n;i++)
    {
        if ((str[i - 1] == 'R' && str[i] == 'B') 
        || (str[i - 1] == 'B' && str[i] == 'R'))
            leng++;
        else
            lenset();
    }
    cout << max(leng,maxlen);
}