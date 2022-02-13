#include <iostream>
#include <string>
#include <set>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int a[11], N, K;
bool ck[11];
set<string> num;

void fun(int cnt, string str)
{
    if (cnt == K) //k개 선택하면 끝
    {
        num.insert(str);
        return;
    }
    for (int i = 0; i < N; i++) //선택 가능한 모든 원소에대해
    {
        if (!ck[i])
        {                                        // 이전에 선택된 원소는 다시 선택 안하도록
            ck[i] = true;                        // 현재 선택한 원소 방문 체크
            fun(cnt + 1, str + to_string(a[i])); // cnt 증가하고 생성한 문자열에 추가
            ck[i] = false;                       // backtrack된 위치에서 선택했던 원소 방문 취소
        }
    }
}

int main()
{
    fast_io();
    cin >> N >> K;
    for (int i = 0; i < N; i++)
        cin >> a[i];
    fun(0, "");
    cout << num.size();
}