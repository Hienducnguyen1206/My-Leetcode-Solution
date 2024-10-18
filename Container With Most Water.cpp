class Solution {
public:
    int maxArea(vector<int>& height) {
    int k = 0;
    int l = height.size()-1;
    int maxArea,area;

    while(k<l){
        area = (l - k) * min(height[k], height[l]);;
        if(area > maxArea){
            maxArea = area;
        }else{
            if(height[k]<height[l]){
                k++;
            }else{
                l--;
            }         
        }

    }
    return maxArea;
    
    
    }     
};
