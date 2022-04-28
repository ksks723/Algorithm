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
vector<int> v;
int classNum, studentNum, score;
int main()
{
    fast_io();
    cin >> classNum;
    while(classNum--)
    {
        cin >> studentNum;
        for (int i = 0; i < studentNum;i++)
        {
            cin >> score;
            v.push_back(score);
        }
        sort(v.begin(), v.end());
        cout << "Max " << v[studentNum - 1] << ", Min " << v[0] << ", Largest gap " << v[studentNum - 1]-v[0]<<"\n";
        v.clear();
    }
}