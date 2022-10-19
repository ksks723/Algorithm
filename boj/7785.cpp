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
    multiset<string> set; //set은 자동정렬된다. 그냥set 과 다른 점은 중복허용
    int n;

    cin >> n;
    while (n--)
    {
        string str1, str2;
        cin >> str1 >> str2;
        if (str2 == "enter")
            set.insert(str1);
        else
            set.erase(str1);
    }
    for (auto it = set.rbegin(); it != set.rend(); it++)
    {
        cout << *it << "\n";
    }
}