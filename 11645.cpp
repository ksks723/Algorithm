
#include <iostream>
#include <map>
using namespace std;
map<string,bool> m;
int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int cities;
        cin >> cities;
        for(int i=0;i<cities;i++)
        {
           string str;
           cin >> str;
           if(!m[str])
                m.insert({str,true}); 
        }
        cout << m.size() << "\n";
        m.clear();
    }
}
