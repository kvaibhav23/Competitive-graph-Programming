class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int l= 0, h =nums.size()- 1;
        while (l <h){
            int m =l +(h -l)/ 2; 
            if (m % 2==0){
                if (nums[m]== nums[m+1]){
                    l= m +2;
                } else{
                    h =m;
                }
            } else {
                if (nums[m]== nums[m- 1]){
                    l =m +1;
                } else {
                    h= m -1;
                }
            }
        }
        return nums[l]; 
    }
};