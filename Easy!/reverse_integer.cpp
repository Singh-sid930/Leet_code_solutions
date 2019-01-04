class Solution {
public:
    int reverse(int x) 
    {
        int res = 0;
        cout<<INT_MAX;
        cout<<"**";
        
        while (x!=0)
        {
            int rem     =   x%10;
            x           =   x/10;
            if(res>INT_MAX/10||(res+(x%10)>INT_MAX/10))return 0;
            if(res<INT_MIN/10||(res+(x%10)<INT_MIN/10))return 0;
            res         =   res *10 +  rem;
            rem         =    0;
            
        }
        
        return res;
        
    }
};