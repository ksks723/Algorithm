#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int alpha[97];
string hol, zzac;
int main()
{
    string s;
    cin >> s;
    for (char i : s)
    {
        alpha[i]++;
    }
    for (char i = 'A'; i <= 'Z'; i++)
    {
        if (alpha[i] % 2)
        {
            hol += i;
        }
        for (int j = 0; j < alpha[i] / 2; j++)
        {
            zzac += i;
        }
    }
    if (hol.size() > 1)
    {
        printf("I'm Sorry Hansoo");
    }
    else
    {
        cout << zzac;
        cout << hol;
        reverse(zzac.begin(), zzac.end());
        cout << zzac;
    }
}