#include <iostream>
using namespace std;
int main()
{

    int N, F;
    int num;
    int k;
    int i;
    int n = 0;
    int count = 0;

    cin >> N;
    cin >> F;

    N = (N / 100) * 100;

    k = N;
    for (i = 0; i < 100; i++)
    {

        if (k % F == 0)
        {

            break;
        }
        k += 1;
    }
    if (i < 10)
        cout << "0";

    cout << i;

    return 0;
}