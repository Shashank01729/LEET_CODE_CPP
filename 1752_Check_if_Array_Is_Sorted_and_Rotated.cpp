class Solution {
public:
    bool check(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        for(int i=1;i<n;i++){
            if(nums[i-1]>nums[i]){
                count++;
            }
        }
        
        // if last element is greater than 1st element
        if(nums[n-1]>nums[0]){         
            count++;
        }

        // for all same element in the array, we used <
        return count<=1;       
    }
};