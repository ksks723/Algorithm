#include <iostream>
#include <vector>
#include <algorithm>
#include <math.h>
using namespace std;
vector<int> v;
vector<int> res;
int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        int min_value = 0;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());
        for (int i = 0; i < n; i++)
        {
            if (i % 2 == 0)
                res.push_back(v[i]);
        }
        for (int i = n - 1; i > 0; i--)

        {
            if (i % 2 == 1)
                res.push_back(v[i]);
        }
        for (int i = 1; i < n; i++)
        {
            int tmp = abs(res[i] - res[i - 1]);
            if (tmp > min_value)
                min_value = tmp;
        }
        v.clear();
        res.clear();
        cout << min_value << "\n";
    }
}
