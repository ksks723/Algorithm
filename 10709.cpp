#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
vector<char> arr;
int main(void)
{
    fast_io();
    int h,w;
    cin >> h>>w;
    for (int i = 0; i < h;i++)
    {
        bool f=false;
        int num = 1;
        for (int j = 0; j < w;j++)
        {
            char ch;
            cin >> ch;
            arr.push_back(ch);
        }
        for (int j = 0; j < w;j++)
        {
            if(arr[j]=='c')
            {
                f = true;
                num = 1;
                cout << "0 ";
            }    
            if(!f && arr[j]=='.')
                cout << "-1 ";
            if(f && arr[j] == '.')
            {
                cout << num++ << " ";
            }
        }
        cout << "\n";
        arr.clear();
    }
}
