class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {
        int chunks = 0;
        int maxtillnow =0;
        int n=arr.size();
        for(int i=0;i<n;i++){
            maxtillnow=max(maxtillnow,arr[i]);
            if(maxtillnow == i){
                chunks++;
            }
        }
        return chunks;
    }
};