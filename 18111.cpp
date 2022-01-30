#include <iostream>
using namespace std;

void BOJ_18111()
{

    int N, M, B;
    int mintime = 1e9; // (double)(10,0000,0000.0)
    int max_H = -1;
    cin >> N >> M >> B;
    int l[N][M];
    for (int i = 0; i < N; i++)
        for (int j = 0; j < M; j++)
            cin >> l[i][j];

    // 0 ~ 256 모든 높이 계산
    for (int H = 0; H <= 256; H++)
    {
        int inven = 0;
        int rm = 0;
        for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < M; j++)
            {
                int current_H = l[i][j] - H;
                // l[i][j]가 64라면 current_H의 범위는 [64 ~ -192]

                // current_H가 음수면 inven에서 빼고, 양수면 rm에 더한다.
                if (current_H < 0)
                    inven -= current_H; // 부족한 만큼 인벤에서 가져다 쓸 블럭 수 (음수로 기록)
                else
                    rm += current_H; // 블록을 제거하고 인벤에 들어온 갯수
            }
        }
        // 인벤 + 제거 수 >= 인벤에서 사용 수 -> False면 이벤 블록 수가 부족하므로 불가능
        if (rm + B >= inven)
        {
            int ttime = 2 * rm + inven; // 제거 수 * 2초 + 놓은 수
            if (mintime >= ttime)       // 최소 시간보다 작으면 시간과 높이 기록.
            {
                mintime = ttime;
                max_H = H;
            }
        }
    }
    cout << mintime << " " << max_H;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    BOJ_18111();
}