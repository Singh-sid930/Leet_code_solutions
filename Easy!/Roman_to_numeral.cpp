class Solution {
public:
    int romanToInt(string s) {
        
    int result = 0;
        
    int len = s.length();
    //int val = value(s[0],s[1]);
      
    for (int i = 0; i<len;i++)
    {
     int val = value(s[i],s[i+1]);
        result = result+val;
    }
    return result; 
        
    }
    
    int value (char a, char b)
    {
        int in = 0;
        int sec = 0;
        
        switch(a)
        { 
            case 'I':in=1;
                break;
            case 'V':in=5;
                break;
            case 'X':in=10;
                break;
            case 'L':in=50;
                break;
            case 'C':in=100;
                break;
            case 'D':in=500;
                break;
            case 'M':in=1000;
                break;
            default:in=0;
        }
          switch(b)
        {
            case 'I':sec=1;
                break;
            case 'V':sec=5;
                break;
            case 'X':sec=10;
                break;
            case 'L':sec=50;
                break;
            case 'C':sec=100;
                break;
            case 'D':sec=500;
                break;
            case 'M':sec=1000;
                break;
            default:sec=0;
        }
        
        
        if (in<sec)
        {
            in=-1*in;
        }
        return in;
        
    }
    
    
};