#include <iostream>
#include <vector>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n, arr[1000001];
vector<int> v;
int main()
{
    fast_io();
    cin >> n;
    for (int i = 0; i < n;i++)
      {cin >> arr[i];
        if(!arr[i])
            v.push_back(i);
      }

    for (int i = 0; i < n - 1;i++)
        if(arr[i] && arr[i] == arr[i+1])
        {
            cout << "-1";
            return 0;
        }

    for (int i = 0; i < v.size();i++)
    {
        if(!arr[v[i]])
        {
            for (int j = 1; j < 4;j++)
                if(arr[v[i]-1]!=j && arr[v[i]+1]!=j)
                 {   arr[v[i]] = j;
                     break;}
        }
    }

    for (int i = 0; i < n;i++)
        cout << arr[i] << " ";
}
