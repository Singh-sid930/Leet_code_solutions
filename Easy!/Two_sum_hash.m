//Class which returns the indices of the two number which add up to the target numerical. Implemented two pass hashing to take care of time complexity.


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        map<int, int> lookup;
        map<int,int> :: iterator found;
        map<int,int> :: iterator itr;
        int compliment;
        
        
        int i;
        int n;
        int t;
        int q;
        
      
        for (i = 0; i<nums.size();i++)
        { 
            lookup.insert(pair <int, int>(nums[i],i));
         }

        for (n=0;n<=nums.size();n++)
        {
            compliment = target -nums[n];
            
            if (lookup.count(compliment)>0)
            {
                found = lookup.find(compliment);
                if(found->second!=n)
                {
                t=found->second;
                q=n;
                break;
                }
            }
        }
        
        return{q,t};
        
        
    }
};