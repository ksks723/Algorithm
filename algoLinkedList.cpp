#include <bits/stdc++.h>
using namespace std;

const int MX = 1000005;
int dat[MX], pre[MX], nxt[MX];
int unused = 1; //0은 이미 썼다는 전제

void insert(int addr, int num)
{
    dat[unused] = num;
    pre[unused] = addr;
    nxt[unused] = nxt[addr];
    if (nxt[addr] != -1) //다음값이 있다면
        pre[nxt[addr]] = unused;
    nxt[addr] = unused;
    unused++;
}

void erase(int addr)
{

    nxt[pre[addr]] = nxt[addr];
    if (nxt[addr] != -1) //지워야할게 끝이라면 굳이 넘겨줄 필요 x
        pre[nxt[addr]] = pre[addr];
}

void traverse()
{
    int cur = nxt[0];
    while (cur != -1)
    {
        cout << "< " << cur << " > ";
        cout << pre[cur] << " ";
        cout << dat[cur] << " ";
        cout << nxt[cur] << " \n";

        cur = nxt[cur];
    }
    cout << "\n\n";
}

void insert_test()
{
    cout << "****** insert_test *****\n";
    insert(0, 30); // 10(address=1)
    traverse();
    insert(0, 10); // 30(address=2) 10
    traverse();
    insert(2, 20); // 30 40(address=3) 10
    traverse();
    insert(1, 40); // 30 40 10 20(address=4)
    traverse();
    insert(4, 50); // 30 40 10 20 70(address=5)
    traverse();
}

void erase_test()
{
    cout << "****** erase_test *****\n";
    erase(1); // 30 40 20 70
    traverse();
    erase(2); // 40 20 70
    traverse();
    erase(4); // 40 70
    traverse();
    erase(5); // 40
    traverse();
}

int main(void)
{
    fill(pre, pre + MX, -1);
    fill(nxt, nxt + MX, -1);
    cout << pre[0] << " ";
    cout << dat[0] << " ";
    cout << nxt[0] << " \n";
    insert_test();
    erase_test();
}