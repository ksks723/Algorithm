#include <iostream>
#include <vector>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main()
{
    fast_io();
    while (1)
    {
        long long n, m;
        long long res = 0, num;
        long long posiA = 0, posiB = 0;
        vector<long long> a;
        vector<long long> b;

        cin >> n >> m;
        if (n == 0 && m == 0)
        {
            break;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> num;
            a.push_back(num);
        }
        for (int i = 0; i < m; i++)
        {
            cin >> num;
            b.push_back(num);
        }
        while (1)
        {
            if (posiA == a.size() || posiB == b.size())
                break;
            else if (a[posiA] < b[posiB])
                posiA++;
            else if (a[posiA] > b[posiB])
                posiB++;
            else
            {
                posiA++;
                posiB++;
                res++;
            }
        }
        cout << res << '\n';
    }
}