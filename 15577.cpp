
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void fast_io(void)
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
}
float q,n;
vector<float> v;
int main(void)
{
    fast_io();
    cin >>q;
    for(int i=0;i<q;i++)
    {
       int a;
        cin >> a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=1;i<q;i++)
    {
        if(i==1)
            n=(v[i-1]+v[i])/2;
        else
            n=(n+v[i])/2;
    }
    printf("%f",n);
}