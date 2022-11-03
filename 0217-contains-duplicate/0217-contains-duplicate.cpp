//12:53~
//17:25
//맨앞과 맨뒤를 차례대로 값을 비교하고 싶었습니다...
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        bool fg=false;
        map<int,int> m;
        for(int i=0;i<nums.size();i++)
        {
            if (m.find(nums[i]) != m.end()) 
               fg=true;
            else
                m.insert({nums[i],nums[i]});
        }
        return fg;
    }
};