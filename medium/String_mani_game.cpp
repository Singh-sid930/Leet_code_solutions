#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main(){



	string s = "bbb";

	stack <char> cs;

	int length = s.length();

	int bob_count = 0;
	int wendy_count = 0;
	int flag = 0;

	for (int i = 0; i<length-1;i++){

		if (cs.empty()){
			cout<<"||empty stack, pushing an element||";
			cs.push(s[i]);
			cout<<i;
			cout<<"||";
		}
		else if (cs.top()==s[i] && cs.top() == s[i+1] && cs.top() =='w'){
			cout<<"|removing w for wendy ||";
			cs.pop();
			wendy_count = wendy_count+1;
			flag = 0;
			i = i-1; 
			cout<<i;
			cout<<"||";
		}
		else if (cs.top()==s[i] && cs.top() == s[i+1] && cs.top() =='b'){
			cout<<"||removing b for bob||";
			cs.pop();
			bob_count = bob_count+1;
			flag = 1;
			i = i-1; 
			cout<<i;
			cout<<"||";
		}
		else{
			cout<<"||no luck, pushing an element  ||";
			cs.push(s[i]);
			cout<<i;
			cout<<"||";
		}
	}

	if(wendy_count>bob_count){
		cout<<"Wendy wins";
	}
	else if (wendy_count<bob_count){
		cout<<"Bob wins";
	}
	else{
		if(flag ==0)
		{
			cout<<"wendy wins";
		}
		else{
			cout<<"bob wins";
		}
	}


	return 0;
}