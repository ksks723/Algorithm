#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX];
int pos = 0;

void push(int x)
{
    dat[pos++] = x;
}

void pop()
{
    pos--;
}

int top()
{
    cout << "top : " << pos << "\n";
    cout << "top : " << pos - 1 << "\n";
    cout << "top : " << pos << "\n";
    cout << "top : " << pos-- << "\n";
    cout << "top : " << pos << "\n";
    //return dat[pos--] 로 했을때 오버플로우 된거같아 확인해보니 이런 차이가 있었다.
    return dat[pos - 1];
}

void test()
{
    push(5);
    push(4);
    push(3);
    cout << top() << '\n'; // 3
    pop();
    pop();
    cout << top() << '\n'; // 5
    push(10);
    push(12);
    cout << top() << '\n'; // 12
    pop();
    cout << top() << '\n'; // 10
}

int main(void)
{
    test();
}