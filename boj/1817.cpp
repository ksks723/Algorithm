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
int num,weight,cnt;
vector<string> v;
int main(void)
{
    fast_io();
    cin >> num >> weight;
    int tmp = weight;
    while(num--)
    {
        int book;
        cin >> book;
        if(tmp-book<0)
        {
            cnt++;
            tmp=weight;
        }
            tmp-=book;
    }
    if(tmp==weight)
        cout << cnt;
    else
        cout << cnt +1;
} 