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
        a = s.top();
        s.pop();
        if (a == s.top())//c == a
            cnt++;

        tmp.push(a); // c a b
        cout << tmp.top();
    }    
}
