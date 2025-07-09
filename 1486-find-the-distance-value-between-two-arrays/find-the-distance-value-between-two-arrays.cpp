class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int m=arr1.size();
        int n=arr2.size();
        int cnt=0;
        
        //sort(arr2.begin(),arr2.end());
        for(int i=0;i<m;i++){
             bool flag=true;
            // int left=0;
            // int right=n-1;
            // while(left<=right){
                
            //     int mid=left+(right-left)/2;
            //     if(abs(arr1[i]-arr2[mid])<=d){
            //         flag=false;

            //         break;
            //     }else{
            //         right=mid-1;
            //     }
            // }
            // if(flag) cnt++;
            for(int j=0;j<n;j++){
                if(abs(arr1[i]-arr2[j])<=d){
                    flag=false;
                    break;
                }

            }
            if(flag){
                cnt++;
            }
        }
        return cnt;
    }
};