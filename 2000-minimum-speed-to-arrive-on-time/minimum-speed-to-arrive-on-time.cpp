class Solution {
public:
    int minSpeedOnTime(vector<int>& dist, double hour) {
         int n = dist.size();
        if (hour <= n - 1) return -1;

        int s = 1, e = 10000000;
        while(s<e){
            int mid=s+(e-s)/2;
            double sum=0;
            for(int i=0;i<dist.size()-1;i++){
               
                sum=sum+ceil(double(dist[i])/double(mid));

            }
            sum+=+double(dist[dist.size()-1])/(double(mid));
            if(sum<=hour){
                
               e=mid;
            }
            else{
                s=mid+1;
            }
        } return s;
    }
};