class Solution {
public:
    int shortestSubarray(vector<int>& nums, int k) {

        if(k==1){
            if(nums[0]>=k) return 1;

            return -1;
        }
        
        vector<long long >v1;
        long long s=0;

        for(auto a:nums){
         s=s+a;
         v1.push_back(s);
        }
        

        deque<int>d1;

        long long  m=INT_MAX;

        long long sum=0;

        for(int i=0;i<size(nums);i++){
           sum+=nums[i];

           if(sum>=k) m=min(m,(long long )i+1);

           if( d1.size()>0 && sum-(v1[d1.front()]) >=k){

            while(d1.size()>0 && sum-(v1[d1.front()]) >=k){

              m=min(m,(long long)i-d1.front());
              
              d1.pop_front();

            }

           }


           // maintaining deque in sorted order (maintins index in sorted order )

           while(!d1.empty() && v1[d1.back()]>=sum){  
               d1.pop_back();
           }

           d1.push_back(i);
           
        }

        if(m==INT_MAX) return -1;

        return m;
    }
};