#include <iostream>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int arr[10],brr[10];
int sc,num;
int main()
{
    fast_io();
    cin >> arr[0];
    for (int i = 1; i < 9;i++)
    {    cin >> sc;
        arr[i] = sc + arr[i - 1];
    }
    for (int i = 0; i < 9; i++)
    {
        cin >> brr[i];
        if(arr[i]> num)
            sc = 7;
        num += brr[i];
    }
    if(sc==7)
        cout << "Yes";
    else
        cout << "No";
}
