#include <string>
class Solution {
public:
    bool isPalindrome(int x) 
    {
        std::string original = std::to_string(x);
        std::string check = original;
        
        int len = original.length();
        for (int i = 0; i < len / 2; i++) 
            swap(original[i], original[len - i - 1]); 
        if(check ==original)return true;
        if(check!=original)return false;
        
    }
    
};