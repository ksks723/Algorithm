#include <iostream>
#include <algorithm>
using namespace std;
int n;
string arr[51];
int calSum(string a)
{
    int sum = 0;
    for (int i = 0; i < a.length(); i++)
        if(a[i]-'0' <=9 && a[i]-'0'>=0)
            sum += a[i] - '0';
    return sum;
}
bool absort(string a, string b)
{
    if(a.length() != b.length())
        return a.length() < b.length();
    else
    {
        int as = calSum(a);
        int bs = calSum(b);
        if(as != bs)
            return as < bs;
        else
            return a < b;
    }
}
int main(void)
{
    cin >> n;
    for (int i = 0; i < n;i++)
        cin >> arr[i];
    sort(arr, arr+n,absort);
    for (int i = 0; i < n; i++)
        cout  << arr[i]<<"\n";
}
