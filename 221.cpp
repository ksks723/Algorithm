#include <iostream>
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
    int num;
    int sum;
    int v;

    cin >> num;

    for (int i = 1; i < num; ++i)
    {
        sum = i;
        v = i;

        while (v)
        {
            sum += v % 10;
            v /= 10;
        }

        if (num == sum)
        {
            cout << i;
            return 0;
        }
    }

    cout << "0";
}