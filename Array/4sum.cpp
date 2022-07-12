class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>s;
        // vector<vector<int>>ans;
        sort(nums.begin(),nums.end());
        
        for(int i = 0;i<nums.size()-1;i++){
            for(int j = i + 1; j < nums.size();j++){
                int low = j + 1;
                int high = nums.size()-1;
                while(low < high){
                 int sum= nums[i]+nums[j]+nums[low]+nums[high];
                
                if(sum  == target){
                   s.insert(vector<int>{nums[i],nums[j],nums[low],nums[high]});
                    low++;
                    high--;
                }
                 else if(sum > target){
                    high--;
                }
                else{
                    low++;
                }
            }
            }
        }
        
         vector<vector<int>>ans;
        for(auto i : s) {
            ans.push_back(vector<int>{i});
        }       return ans;
