class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int len     = INT_MAX;
        int len1    = 0;
        int size    = 0;
        int arr_s   = strs.size();
        int flag    = 1;
        
        for(int i = 0; i<strs.size(); i++)
        {
            len1    = strs[i].length();
            if (len1<len)
            {
                len = len1;
            }
            
        }
        for (int i = 0; i<len; i++)
        {
            if(arr_s==1)
            {
                return strs[0];
            }
            
            for(int r = 0; r<arr_s-1 ; r++)
            {
                cout <<"in inner loop";
                if (strs[r][i]==strs[r+1][i])
                {
                 flag = 0;   
                }
                else
                {
                flag = 1;
                break;
                }
                }
            
            if (flag == 0 )
                {
                  size = i+1;
                }
            else
                break;
            
        }
        if (size==0)
        {
            return "";
        }
        cout<<size<<"\n";
        cout<<strs[0].substr(0,size);
        return strs[0].substr(0,size);
        
    }
};