#include <iostream>
#include <algorithm>
#include <stack>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
stack<int> s;
stack<int> tmp;
int n, k, cnt=1,a;
bool flag;
void funS()
{
    s.pop();
    for (int i = 1; i < k - 1;i++)
        tmp.pop();
    cnt = 1;
    flag = true;
}
void funB()
{
    tmp.pop();
    for (int i = 1; i < k - 1;i++)
        s.pop();
    cnt = 1;
    flag = true;
}
void workS()
{
    a = s.top();
    s.pop();
    if (a == s.top())
        cnt++;
    if (cnt == k)
        funS();
    else
        tmp.push(a); 
}
void workB()
{
    a = tmp.top();
    tmp.pop();
    if (a == tmp.top())
        cnt++;
    if (cnt == k)
        funB();
    else
        s.push(a); 
}
int main(void)
{
    fast_io();
    cin >> n >> k;
    for (int i = 0; i < n;i++)
        {
            cin >> a;
            s.push(a);
        }
    while (!s.empty())
    {
        flag = false;
        workS();
        workB();
        if(flag)
            break;
    }
    for (auto i = 0; i < s.size();i++)
        {
            cout << s.top();
            s.pop();
        }
}
