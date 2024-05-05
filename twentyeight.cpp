//brut force approach fit for 52/62 test case
class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int max_product=INT_MIN;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int label=min(height[i],height[j]);
                int product=label*(j-i);
                if(product>max_product){
                    max_product=product;
                }

            }
        }
        return max_product;
        
    }
};