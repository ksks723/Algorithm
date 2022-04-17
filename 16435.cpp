
#include <iostream>
#include <algorithm>
using namespace std;
int l,snake,fruit[1001];
int main()
{
    cin >> l >> snake;
    for(int i=0;i<l;i++)
        cin >> fruit[i];
    sort(fruit,fruit+l);
    for(int i=0;i<l;i++)
    {
        if(fruit[i]<=snake)
            snake++;
    }
    cout << snake;
    return 0;
}
