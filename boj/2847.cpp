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
    fast_io();//
    int n, res = 0,arr[101]={0,};
    cin >> n;
    for (int i = 1; i < n+1; i++)
    {
        cin >> arr[i];
    }
    int min = arr[n];
    for (int i = n-1; i >0; i--)
    {
        if(arr[i]>=min)
           {
               res += arr[i] - min + 1;
               min--;
           } 
        else
            min = arr[i];
    }
    cout << res;
}