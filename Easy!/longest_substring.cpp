class Solution {
public:
    int lengthOfLongestSubstring(string s) 
    {
        unordered_map<char, int> lookup; 
        int len = s.length();
        int max_len = 1;
        int cur_len = 1;
        int cur_len1 = 1;
        int st =0;
        
        lookup[s[0]] = 0;
        
        for (int i =1; i<len;i++)
        {
            if (lookup.find(s[i])==lookup.end())
            {
                lookup[s[i]] = i;
                cur_len1= i-st+1;
                 if (max_len<cur_len1)
                    {
                        max_len = cur_len1;
                        cout<<s[i];
                        cout<<max_len;     
                    }                
                
            }
            
            else 
            {
                    st = lookup[s[i]]+1;
                    cur_len = i-st;
                    cout<<s[i];
                    cout<<max_len;
                    if (max_len<cur_len)
                    {
                        max_len = cur_len;   
                    }
                lookup[s[i]] = i;
                
            }
        }
        if (len ==0)
        {
            max_len =0;
        }        
        return max_len;
        
    }
};