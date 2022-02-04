#include <iostream>
#include <vector>
using namespace std;
int N, M, minV, ck = 1;
int main(void)
{
    cin >> N >> M;
    vector<string> a(N);
    for (int i = 0; i < N; i++)
        cin >> a[i];
    minV = N > M ? M : N; //작은 변의 길이를기준
    while (ck && --minV)
    {
        for (int i = 0; i < N - minV; i++)
            for (int j = 0; j < M - minV; j++)
            {
                if (a[i][j + minV] == a[i][j] &&
                    a[i + minV][j] == a[i][j] &&
                    a[i + minV][j + minV] == a[i][j])
                    ck = 0;
            }
    }
    cout << (minV + 1) * (minV + 1) << endl;
}