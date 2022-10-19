#include <iostream>
#include <vector>

int num;
using namespace std;

int main(void)
{
    cin >> num;
    vector<int> v(num);
    for(int i=0;i<num;i++)
        cin >> v[i];
    if(num==1)
    {
        cout << "0";
        return 0;
    }
    int tmp=0;
    for(int i=0;i<num;i++)
        for(int j=i+1;j<num;j++)
        {
            if(v[i]<v[j] && (tmp<v[j]-v[i]))
                tmp = v[j]-v[i];
        }
    cout << tmp;
}
