#include <iostream>
#include <string>
#include <cstring>

using namespace std;

int main(void)
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    const int MAX = 20 + 1;
    bool result[MAX] = {0};

    int m;
    cin >> m;
    for (int i = 0; i < m; i++)
    {
        int tmp;
        string str;
        cin >> str;

        if (str == "add")
        {
            cin >> tmp;

            result[tmp] = true;
        }
        else if (str == "remove")
        {
            cin >> tmp;

            result[tmp] = false;
        }
        else if (str == "check")
        {
            cin >> tmp;

            if (result[tmp])
                cout << "1\n";
            else
                cout << "0\n";
        }
        else if (str == "toggle")
        {
            cin >> tmp;

            if (result[tmp])
                result[tmp] = false;
            else
                result[tmp] = true;
        }
        else if (str == "all")
        {
            memset(result, true, sizeof(result));
        }
        else
        {
            memset(result, false, sizeof(result));
        }
    }
    return 0;
}
\