#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string str;
        cin >> str;
        if (str[str.size()/2 - 1] == str[str.size()/2])
            cout << "Do-it\n";
        else
            cout << "Do-it-Not\n";
    }
}