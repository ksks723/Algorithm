#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int gcd(int a, int b){
    return !b ? a : gcd(b, a % b);
}
int main()
{
    fast_io();
    int t;
    cin >> t;
    while(t--)
    {
        int a, b,arr[2]={0,0};
        cin >> a >> b;
        cout << (a * b) / gcd(a, b) << "\n";
    }

}
