class Solution {
public:
    int maxArea(vector<int>& height) {
        vector<int> area;
        int n = height.size();
        int i=0;
        int j=n-1;
        while(i<j){
            int comp = min(height[i],height[j]);
            area.push_back(comp*(j-i));
            if(height[i]<height[j]){
                i++;
            }else if(height[i]>height[j]){
                j--;
            }else{
                i++;
            }
        }
        int maxArea = area[0];
        for (int i = 1; i < area.size(); i++) {
            if (area[i] > maxArea) {
                maxArea = area[i];
            }
        }
    return maxArea;  
    }
};