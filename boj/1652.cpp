#include <iostream>
#include <algorithm>

using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n, garo, sero;
int two;
char arr[101][101];
int main()
{
    fast_io();
    cin >> n;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> arr[i][j];

    for (int i = 0; i < n; i++)
    {
        two = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[i][j] == '.')
                two++;
                if(two>=2 && j==n-1)
                    garo++;
            else
                if (two >= 2)
                    garo++;
                two = 0;
        }
    }
    two = 0;
    for (int i = 0; i < n; i++)
    {
        two = 0;
        for (int j = 0; j < n; j++)
        {
            if (arr[j][i] == '.')
                two++;
                  if(two>=2 && j==n-1)
                    sero++;
            else
                if (two >= 2)
                    sero++;
                two = 0;
        }
    }
    cout << garo << " " << sero;
}
