#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main(){
	stack<int> s;
  string question;
  getline(cin,question);

  for(int i = 0 ; i < question.length() ; i++){
  	if(question[i]==' ')
  	continue;
    if(isdigit(question[i])&& isdigit(question[i+1])){
	string p=to_string(question[i])+ to_string(question[i+1]);
	int k=stoi(p);
      s.push(k - '0');
  }
  else if(isdigit(question[i]))
   s.push(question[i] - '0');
    else{
      int a = s.top();
      s.pop();
      int b = s.top();
      s.pop();

      if(question[i]=='+') s.push(a+b);
      else if(question[i]=='-') s.push(a-b);
      else if(question[i]=='*') s.push(a*b);
      else if(question[i]=='/') s.push(a/b);
    }
  }
  cout<<"Converting to infix and solving we get : "<<s.top();
  return 0;
}
