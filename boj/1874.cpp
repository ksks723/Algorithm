#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}

void get_answer(void)
{
    stack<int> st;
    int testcase;
    int a;
    int num;
    bool flag;
    vector<char> list;

    cin >> testcase;
    num = 1;
    for (int i = 0; i < testcase; i++)
    {
        cin >> a;
        flag = false;
        while (num <= a)
        {
            flag = true;
            st.push(num);
            list.push_back('+');
            num++;
        }
        while (!st.empty() && st.top() >= a)
        {
            flag = true;
            st.pop();
            list.push_back('-');
        }
        if (!flag)
        {
            cout << "NO\n";
            return;
        }
    }

    for (int i = 0; i < list.size(); i++)
    {
        cout << list[i] << '\n';
    }
}

int main(void)
{
    fast_io();
    get_answer();
}