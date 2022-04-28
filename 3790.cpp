#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <cstring>
using namespace std;
int arr[12], n;
string a, b;
vector<pair<string, string>> v;
int getInt(string a, string b)
{
    if (b.size() == 1)
        b = "0" + b;
    a += b;
    int ab = stoi(a);
    if (119 < ab && ab < 219)
        return 0;
    else if (218 < ab && ab < 321)
        return 1;
    else if (320 < ab && ab < 420)
        return 2;
    else if (419 < ab && ab < 521)
        return 3;
    else if (520 < ab && ab < 622)
        return 4;
    else if (621 < ab && ab < 723)
        return 5;
    else if (722 < ab && ab < 824)
        return 6;
    else if (822 < ab && ab < 923)
        return 7;
    else if (922 < ab && ab < 1023)
        return 8;
    else if (1022 < ab && ab < 1123)
        return 9;
    else if (1122 < ab && ab < 1222)
        return 10;
    else
        return 11;
}
bool sorting(pair<string, string> p, pair<string, string> p2)
{
    if (p.first.length() < p2.first.length())
        return true;
    else if (p.first.length() == p2.first.length())
    {
        if (strcmp(p.first.c_str(), p2.first.c_str()) < 0)
            return true;
        else
            return false;
    }
    else
        return false;
}
int main(void)
{
    for (int i = 0; i < 7; i++)
    {
        cin >> a >> b;
        int idx = getInt(a, b);
        arr[idx]++;
    }
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a >> b;
        int idx = getInt(a, b);
        if (!arr[idx])
            v.push_back(pair<string, string>(a, b));
    }
    if (v.empty())
    {
        cout << "ALL FAILED";
    }
    else
 {   sort(v.begin(), v.end(), sorting);
    for (int i = 0; i < v.size(); i++)
        cout << v[i].first << " " << v[i].second << "\n";
}
}
