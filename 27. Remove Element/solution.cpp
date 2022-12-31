/*
11 ms
8.8 MB

TC : O(N)
SC : O(1)
*/

/**
 * @author : SahilK-027
 * @brief : Two pointer
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int ptr = 0; //0 1 2
        int n = nums.size(); //8
        while(ptr<n){
            if(nums[ptr]==val){
                for(int i = ptr ; i<n-1 ;i++)
                {
                    nums[i]=nums[i+1];
                }
                n = n-1;
            }
            if(nums[ptr]!=val){
                ptr++;
            }
        }
        return n;
    }
};
