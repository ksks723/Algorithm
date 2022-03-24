#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main(void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string tmp;
        vector<string> r(n);

        for (int i = 0; i < n; i++)
            cin >> tmp >> r[i];
        vector<string> a(r);
        sort(r.begin(), r.end());
        r.erase(unique(r.begin(), r.end()), r.end());
        vector<int> q(n);
        for (int i = 0; i < r.size(); i++)
            for (int j = 0; j < n; j++)
                if (r[i] == a[j])
                    q[i]++;
        int sum = 1;
        for (int i = 0; i < r.size(); i++)
            sum *= (q[i] + 1);
        cout << sum - 1 << endl;
    }
}
