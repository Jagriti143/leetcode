class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int x=flowerbed.size();
        int cnt=0;
        if(n==0) return true;
        if(flowerbed.size()==1) return flowerbed[0]==1?false:true;
        if(flowerbed[0]==0 && flowerbed[1]==0){
            flowerbed[0]=1;
            cnt++;
        }
        for(int i=1;i<x-1;i++){
            if(flowerbed[i-1]!=1 && flowerbed[i+1]!=1 && flowerbed[i]==0){
                cnt++;
                flowerbed[i]=1;
            }
        }
        if(flowerbed[x-1]==0 && flowerbed[x-2]==0){
            flowerbed[x-1]=0;
            cnt++;
        }
        if(cnt>=n) return true;
        return false;
    }
};