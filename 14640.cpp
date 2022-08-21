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
struct lover{
    string name;
    int dis_len;
    string gender;
};
vector<string> v;
int main(void)
{
    fast_io();
    struct lover l1;
    cin >> l1.name >> l1.gender >> l1.dis_len;
    int num;
    cin >> num;
    for(int i=0;i<num;i++)
    {
        struct lover l2;
        cin >> l2.name >> l2.gender >> l2.dis_len;
        if((l1.gender.length()==2 ||l2.gender==l1.gender) && l2.dis_len<=l1.dis_len)
            v.push_back(l2.name);
    }
    if(v.empty())
        cout<<"No one yet";
    else
    {
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++) 
            cout << v[i] << "\n";
    }
}