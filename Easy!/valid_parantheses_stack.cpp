class Solution {
public:
    char opp_char(char b)
    {
        if      (b =='}')
        {
            return '{';
        }
        else if (b ==']')
        {
            return '[';
        }
        else if (b ==')')
        {
            return '(';
        }
        else 
        {
            return NULL;
        }
    }
    
    bool isValid(string s) 
    {
        #include <stack>

        stack <char> cs;

        cs.push(s[0]);
        
        if (s.length()==0)
            return true;
            
        for (int i = 1; i < s.length();i++)
        { 
            if (cs.empty())
            {
                cs.push(s[i]);
            }
            
            else if (opp_char(s[i])==cs.top())
            {
                cout<<"equality condition and popping top element \n  ";
                cout<<cs.top()<<"\n";
                cs.pop();
                
            }

            else
            {
                cout<<"pushing an element\n  ";
                cout<<s[i]<<"\n";     
                cs.push(s[i]);    
            }
            
        }
        
        if (cs.empty())
        {
            return true;            
        }
        else 
        {
            return false;
        }
        
    }
};