#include <iostream>
#include <string>
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
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, cnt = 0;
        cin >> n >> m;
        for (int i = n; i <= m; i++)
        {
            string str = to_string(i);
            for (int j = 0; j < str.length(); j++)
            {
                if (str[j] == '0')
                    cnt++;
            }
        }
        cout << cnt << "\n";
    }
}
