#include <iostream>
#include <string>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int n,res;
char d;
int main(void)
{
    fast_io();
    cin >> n >> d;
    for(int i=1;i<n+1;i++)
    {
        string num= to_string(i);
        for(int j=0;j<num.length();j++)
           if(num[j]==d)
                res++;        
    }
    cout << res;
}