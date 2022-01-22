#include <iostream>
#include <algorithm>jum9koplㅕ
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
long long int x, y, w, s;
int main(void)
{
    cin >> x >> y >> w >> s;
    long long mod = (x + y) % 2;
    if (x < y)
        swap(x, y);
    cout << min((x + y) * w, min((x - mod) * s + mod * w, y * s + (x - y) * w)) << endl;
}
