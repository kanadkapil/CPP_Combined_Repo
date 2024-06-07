#include<bits/stdc++.h> 
using namespace std; 
int precedence(char m) 
{ 
  if(m == '^') 
  return 3; 
  else if(m == '*' || m == '/') 
  return 2; 
  else if(m == '+' || m == '-') 
  return 1; 
  else
   return -1;
} 

void infix_to_postfix(string t) 
{ 
  stack<char> s;
  int l = t.length(); 
  string ans; 
  for(int i = 0; i < l; i++) 
  { 
  if(t[i]==' ')
  continue;
  //if(isdigit(t[i]) )
   if((t[i] >= 'a' && t[i] <= 'z') || (t[i] >= 'A' && t[i] <= 'Z')) 
    ans+=t[i]; 

    else if(t[i] == '(') 
        s.push('('); 
        
    else if(t[i] == ')') 
    { 
      while(s.empty() ==false && s.top() != '(') 
      { 
        char c = s.top(); 
          s.pop(); 
      ans += c;
           
      } 
      if(s.top() == '(') 
      { 
        char c = s.top(); 
        s.pop(); 
      } 
    } 
    else{ 
      while(s.empty()==false && precedence(t[i]) <= precedence(s.top())) 
      { 
        char c = s.top(); 
         s.pop(); 
       ans += c; 
      
      } 
      s.push(t[i]); 
    } 

  } 
  
  while(s.empty() == false) 
  { 
    char c = s.top(); 
      s.pop(); 
   ans += c;
    
  } 
  
  cout << ans << endl; 
}

int main() 
{ 
int n,i;
cout<<"Enter the number of expresions"<<endl;
cin>>n;
  string s[10]; 
  for(i=0;i<=n;i++)
  	getline(cin,s[i]);
   for(i=1;i<=n;i++) {
  	cout<<"string "<<i<<s[i]<<endl;
  infix_to_postfix(s[i]); 
}
  return 0; 
} 
