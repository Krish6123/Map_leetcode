class Solution {
    public:
        int longestConsecutive(vector<int>& nums) {
            if (nums.empty()) return 0;
            sort(nums.begin(),nums.end());
            int ans=0,count=0;
            for(int i=0;i<nums.size()-1;i++){
                if(nums[i+1]==nums[i]+1){
                    count++;
                    ans= max(ans,count);
                }
                else if(nums[i+1]==nums[i]){continue;}
                else{
                    count=0;
                }
            }
            return ans+1;
        }
    };