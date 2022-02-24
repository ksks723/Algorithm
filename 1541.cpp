#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
int main(void)
{
    fast_io();
    bool ck_minus=false;
    int sum = 0;
    string str,num="";
    cin >> str;
    for (int i = 0; i <= str.length();i++)
    {
        if (str[i] == '+' || str[i] == '-'||i==str.length())
        {
            if(ck_minus)
                sum -= stoi(num);
            else
                sum += stoi(num);
            if(str[i]=='-')
                ck_minus = true;
            num = "";
        }
        else
            num += str[i];
    }
    cout << sum;
}