#include <iostream>
#include <vector>

using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n, arr[1000001],cnt=0;
int main()
{
    fast_io();
    cin >> n;
    for (int i = 0; i < n;i++)
     {   cin >> arr[i];
        if(arr[i]==0)
    cnt++;
        
     }
     if(cnt==0)
        {
            cout << "-1";
            return 0;
        }
        for (int i = 0; i < n;i++)
        {
            
        }
}
