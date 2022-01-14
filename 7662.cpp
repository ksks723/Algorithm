#include <bits/stdc++.h>
#include <iostream>
#include <set>

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
    multiset<int> set;
    int t;

    cin >> t;
    while (t--)
    {
        int k;
        cin >> k;
        for (int i = 0; i < k; i++)
        {
            int num;
            char order;
            cin >> order >> num;
            if (order == 'I')
            {
                set.insert(num);
            }
            else if (!set.empty())
            {
                if (num == 1)
                    set.erase(--set.end()); //set.end() 는 마지막원소의 다음을 기리킴
                else
                    set.erase(set.begin());
            }
        }
        if (set.empty())
            cout << "EMPTY\n";
        else
            cout << *(--set.end()) << ' ' << *set.begin() << "\n";
        set.clear();
    }
}