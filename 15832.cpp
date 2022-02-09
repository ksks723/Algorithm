#include <iostream>
#include <queue>
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
    queue<int> q;
    int n, k;
    while(true)
    {
        cin >> n >> k; 
        if(n+k==0) break;
        for (int i = 0; i < n; i++)
        {
            q.push(i + 1);
        }
    
        while (n--)
        {
            for (int i = 0; i < k; i++)
            {
                if (i == k - 1 )
                {
                    if(q.size()==1)
                    cout << q.front() << "\n";
                }
                else
                {
                    q.push(q.front());
                }
                q.pop();
            }
        }
    }
    
}
