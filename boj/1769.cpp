#include <iostream>
#include <string>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
string s;
int a,cnt;
int main()
{
    fast_io();
    
    cin >> s;
    while(s.length()!=1)
    {
        a=0;
        cnt++;
        for(int i=0;i<s.length();i++)
        {
            a+=s[i]-'0';
        }
        
        s=to_string(a);
    }
    a=s[0]-'0';
    if(a<10)
       {
           cout << cnt << "\n";
           if(a%3==0) cout << "YES";
           else cout << "NO";
       }
   return 0;
}
