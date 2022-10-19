#include <iostream>
#include <algorithm>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
struct Stu{
    string name;
    int kor, end, m;
};
Stu arr[100001];
bool cmp(Stu &one,Stu &two)
{
    if (one.kor == two.kor)
    {
        if (one.end == two.end)
        {
            if (one.m == two.m)
            {
                return one.name < two.name;
            }
            else
                return one.m > two.m;
        }
        else
            return one.end < two.end;
    }
    return one.kor > two.kor;
}
int main(void)
{
    fast_io();
    int n;
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> arr[i].name >> arr[i].kor >> arr[i].end >> arr[i].m;
    sort(arr, arr + n, cmp);
    for (int i = 0; i < n;i++)
        cout << arr[i].name << "\n";
}