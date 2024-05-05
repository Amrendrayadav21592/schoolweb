class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int infpt=0;
        for(int i=n-1;i>0;i--){
            if(nums[i-1]<nums[i]){

                infpt=i;
                break;
            }
        }
        if(infpt==0){
            sort(nums.begin(),nums.end());

        }
        else{
            int min=INT_MAX; // Basically it provide the maximum range.
            int toswap=nums[infpt-1];
            for(int i=infpt;i<n;i++){
                if((nums[i]-toswap)>0 &&(nums[i]-toswap) <min ){
                    int temp=nums[i];
                    nums[i]=nums[infpt-1];
                    nums[infpt-1]=temp;  // we have to change the value at index infpt-1 not
                                         // the value of toswap bcs it have copy of index infpt-1
                }

            }
        sort(nums.begin()+infpt,nums.end());
            
            
        }
        

        
    }
};