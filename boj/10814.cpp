#include <vector>
#include <stdio.h>
#include <iostream>
#include <algorithm>
using namespace std;
bool compare(pair<int, string> a, pair<int, string> b)
{
    return a.first < b.first;
}
int main(void)
{
    vector<pair<int, char *>> v;
    int n, age;

    cin >> n;
    for (int i = 0; i < n; i++)
    {
        char *name = new char[101];
        cin >> age >> name;
        v.push_back(make_pair(age, name));
    }
    stable_sort(v.begin(), v.end(), compare);
    for (int i = 0; i < n; i++)
    {
        printf("%d %s\n", v[i].first, v[i].second);
    }
}