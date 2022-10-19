#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
int main(void)
{
    vector<int> v;
    int n, a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        printf("%d\n", v[i]);
    }
}