class Solution {
public:
   
   int can_place(vector<int>&position,int m,int mid){
    int count=1;
    int last=position[0];
    for(int i=0;i<position.size();i++){
        if(position[i]-last>=mid){
            count++;
            last=position[i];
        }
    }return count>=m;
   }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int start=0,ans=0;
        int end=position.back()-position.front();
        while(start<=end){
            int mid=start+(end-start)/2;
            if(can_place(position,m,mid)){
                ans=mid;
                start=mid+1;
            }else{
                end=mid-1;
            }
            
        }return ans;
        
    }
};