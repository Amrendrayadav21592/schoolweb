//first method not fit for only 2 cases might be due to long valued
/*
class Solution {
public:
    long longvector<vector<int>> threeSum(vector<int>& nums) {
        long long int  n=nums.size();
        
        set<vector<int>> st;  //set of vector
        for(int i=0;i<n;i++){
            set<int> hash;   //creating a new set to store nums[j] to find k from array;
            for(int j=i+1;j<n ;j++){
                int third=-(nums[i]+nums[j]);
                if(hash.find(third)!=hash.end()){   // basically it check if third find it 
                                                    //pointer not point at the end of the hash
                    vector<int>temp={nums[i],nums[j],third};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);

                }
                hash.insert(nums[j]);
            }    
        }
        vector<vector<int>> ans(st.begin(),st.end()); //basically it stores list of list 

        return ans;
        


        
    }
};*/
