#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int singleNumber(vector<int>& nums) {
       int len=nums.size();
       unordered_map<int,int> map;

       for(int i=0;i<len;i++)
        map[nums[i]]++;

        for(pair<int,int> i : map)
        {
            if(i.second==1)
                return (i.first);
        }
        return (0);
    }
};

int main(void)
{
    Solution s;
    vector<int> v({2,2,1});
    int r;
    r =s.singleNumber(v);
    cout << r;
}