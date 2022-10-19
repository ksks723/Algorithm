// #include <iostream>
// using namespace std;

// int N, M, B;
// int minH = 1e9, maxH;
// int cost = 1e9, height;
// int field[500][500];

// void solve(int n)
// {
//     int block = B, temp = 0;

//     // 높은 땅의 블록 제거
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < M; j++)
//             if (field[i][j] > n)
//             {
//                 temp += 2 * (field[i][j] - n);
//                 block += field[i][j] - n;
//             }

//     // 낮은 땅에 블록 놓기
//     for (int i = 0; i < N; i++)
//         for (int j = 0; j < M; j++)
//             if (field[i][j] < n)
//             {
//                 temp += n - field[i][j];
//                 block -= n - field[i][j];
//                 if (block < 0)
//                     return;
//             }

//     // 갱신
//     if (temp <= cost)
//     {
//         cost = temp;
//         height = max(height, n);
//     }
// }

// int main()
// {
//     ios_base::sync_with_stdio(0);
//     cin.tie(0);
//     cout.tie(0);

//     cin >> N >> M >> B;
//     for (int i = 0; i < N; i++)
//     {
//         for (int j = 0; j < M; j++)
//         {
//             cin >> field[i][j];
//             minH = min(minH, field[i][j]);
//             maxH = max(maxH, field[i][j]);
//         }
//     }

//     for (int i = minH; i <= maxH; i++)
//         solve(i); // 브루트포스

//     cout << cost << " " << height;

//     return 0;
// }
///////////////////////////////////////////////////////////////
//sslktong
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, b, t;
    cin >> n >> m >> b;

    int cnt[257] = {};
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> t;
            cnt[t]++;
        }

    int ans, mint = 987654321;
    for (int h = 256; h >= 0; --h)
    {
        int need = 0, gain = 0;
        for (int i = 0; i < h; ++i)
            need += (h - i) * cnt[i];
        for (int i = 256; i > h; --i)
            gain += (i - h) * cnt[i];

        t = need + gain * 2;
        if (need <= gain + b)
        {
            if (t < mint)
            {
                mint = t;
                ans = h;
            }
        }
    }
    cout << mint << ' ' << ans;
}
//
#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n, m, b, t;
    cin >> n >> m >> b;

    int cnt[257] = {};
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
        {
            cin >> t;
            cnt[t]++;
        }

    int ans, mint = 987654321;
    for (int h = 256; h >= 0; --h)
    {
        int need = 0, gain = 0;
        for (int i = 0; i < h; ++i)
            need += (h - i) * cnt[i];
        for (int i = 256; i > h; --i)
            gain += (i - h) * cnt[i];

        t = need + gain * 2;
        if (need <= gain + b)
        {
            if (t < mint)
            {
                mint = t;
                ans = h;
            }
        }
    }
    cout << mint << ' ' << ans;
}