#include <vector>
#include <iostream>
#include <string>
using namespace std;
class Solution {
public:
    vector<string> stringMatching(vector<string>& words) {
        vector<string> ans;
        for(auto i:words)
        {
            for(auto j: words)
            {
                if(i==j) continue;
                if(j.find(i)!=-1)
                {
                    ans.push_back(i);
                    break;                    
                }
            }
        }
        return ans;
    }
};

int main(void)
{
    Solution s;
    vector<string> v({"mass","as","hero","superhero"}),ck;
    ck = s.stringMatching(v);
    for(int i=0;i<ck.size();i++)
        cout << ck[i];
    return(0);
}