#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int t,mem,num;
vector<int> v;
int main(void)
{
    fast_io();
    cin >> t;
    while(t--)
    {
        int idx = 0,sum=0,max_num=0;
        cin >> mem;
        for (int i = 0; i < mem;i++)
        {
            cin >> num;
            if(max_num < num)
            {    
                max_num = num;
                idx = i+1;
            }
            v.push_back(num);
        }
        sort(v.rbegin(),v.rend());
        num = 0;
        for (int i = 0; i < v.size();i++)
        {    
            if(v[0]==v[1])
                num++;
            sum += v[i];
        }
        if(!num && sum-v[0]<v[0])
            cout << "majority winner " << idx << "\n";
        else if (!num)
            cout << "minority winner " << idx << "\n";
        else
            cout << "no winner\n";
        v.clear();
    }
}
