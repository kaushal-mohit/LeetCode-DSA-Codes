class Solution {
    double calc(vector<int>& piles, int hour){
        double res=0;

        for(int &x:piles){
            res+=ceil((double)x/(double)hour);
        }

        return res;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int low=1;
        int high=*max_element(piles.begin(), piles.end());

        int res=INT_MAX;

        while(low<=high){
            int mid = low+ (high-low)/2;
            double totalHours= calc(piles,mid);
            if(totalHours<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }

        }
        return low;
    }
};