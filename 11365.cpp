#include <iostream>
#include <algorithm>
#include <string>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
string str;
int main(void)
{
    fast_io();
    while(true)
    {
        getline(cin, str);
        if(str=="END")
            break;
        reverse(str.begin(), str.end());
        cout << str << "\n";
    }
}