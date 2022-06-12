//Brute force
//TC = O(N2)
//SC = O(1)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        for(int i=0;i<n-1;i++)
            for(int j=i+1;j<n;j++){
                if(nums[i]+nums[j] == target)
                    return{i,j};
            }
        return {};
        
        
    }
}; 

//OPTIMIZED USING HASH MAPS
//t(c)=O(N)
//S(C)=0(N)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       vector<int>ans;
        unordered_map<int,int>mpp;
        for(int i=0;i<nums.size();i++){
            if(mpp.find(target-nums[i])!=mpp.end()){
                ans.push_back(mpp[target-nums[i]]);
                ans.push_back(i);
            }
            mpp[nums[i]]=i;
        }
        return ans;
    
    }
};
