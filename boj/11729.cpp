#include <iostream>
#include <vector>

using namespace std;
int n;
vector<pair<int, int>> v;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
//다시봐
void Hanoi(int num, int from, int by, int to)

{

    if (num == 1)

        v.push_back({from, to});

    else

    {

        Hanoi(num - 1, from, to, by);

        v.push_back({from, to});

        Hanoi(num - 1, by, from, to);
    }
}
int main()
{
    fast_io();
    cin >> n;

    Hanoi(n, 1, 2, 3);

    cout << v.size() << "\n";

    for (int i = 0; i < v.size(); i++)

        cout << v[i].first << " " << v[i].second << "\n";
}
