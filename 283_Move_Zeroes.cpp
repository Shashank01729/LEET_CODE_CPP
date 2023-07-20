class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int n=nums.size();
        int Non_Zero_Index=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                swap(nums[i],nums[Non_Zero_Index]);
                Non_Zero_Index++;
            }
        }    
    }
};


/*

class Solution {
public:
    void moveZeroes(vector<int>& nums){
        int n=nums.size();
        int Non_Zero_Index=0;

        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                nums[Non_Zero_Index]=nums[i];
                Non_Zero_Index++;
            }
        }

        for(int i=Non_Zero_Index;i<n;i++){
            nums[i]=0;
        }
        
    }
};

*/