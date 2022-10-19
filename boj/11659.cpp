#include <iostream>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n,t,arr[100010],a,b;

int main(void)
{
    fast_io();
    cin >> n >> t;
    for (int i = 1; i < n+1;i++)
   {     
       cin >> a;
       arr[i] = arr[i - 1] + a;
   }
    while(t--)
    {
        cin >> a >> b;
        cout << arr[b] - arr[a-1] << "\n";
    }
}