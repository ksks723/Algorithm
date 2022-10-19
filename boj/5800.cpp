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
    for(int k=0;k<classNum;k++)
    {
        cin >> studentNum;
        for (int i = 0; i < studentNum; i++)
        {
            cin >> score;
            v.push_back(score);
        }
        sort(v.begin(), v.end());
        score = 0;
		for (int i = 0; i < studentNum-1; i++)
		{
			if (score < v[i + 1] - v[i])
				score = v[i + 1] - v[i];
		}
        cout << "Class "<< k+1 <<"\nMax " << v[studentNum - 1] << ", Min " << v[0] << ", Largest gap " << score<<"\n";
        v.clear();
    }
}
