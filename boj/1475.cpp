#include <algorithm>
#include <iostream>
using namespace std;
int num[10];
string n;
int main(void)
{
    cin >> n;
    for (int i = 0; i < n.length(); i++)
    {
        if (n[i] == '9')
        {
            num[6]++;
        }
        else
            num[n[i] - 48]++;
    }

    num[6] = num[9] = (num[6]) / 2 + (num[6]) % 2;
    // num[6] = num[9] = (num[6] + 1) / 2;
    cout << *max_element(num, num + 10);
}