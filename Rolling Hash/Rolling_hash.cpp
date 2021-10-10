#include<bits/stdc++.h>
using namespace std;

class rt{
public:
string f;
string s;
string curr;
int flag = 0;
void skip();
void append(char c);
void compare();
};
void rt:: skip(){
curr.erase(curr.begin());
}
void rt:: append(char c){
	curr.push_back(c);
}
void rt:: compare(){
if(curr == s)
{	
	cout << '\n' << "The string is matched !!!!!  " << '\n'  << "This is the string  : " << curr << endl;
    flag=0;
}
else
flag =1;
}


int main(){
string a,b;
cout << '\n' << "Enter the input string" << endl;
getline(cin,a);
cout << '\n' << "Enter the string to search for" << endl;
getline(cin,b);

rt ob;
ob.s = b;
ob.f = a;

for(int i =0;i<ob.s.size();i++)
{
  ob.curr.push_back(ob.f[i]);
}
if(ob.curr[0] == ob.s[0])
{
  ob.compare();	
}	
else
for(int k=ob.s.size();k<ob.f.size();k++)
{
 ob.append(ob.f[k]);
 ob.skip();
 if(ob.curr[0]==ob.s[0])
 {	
 	ob.compare();
    if(ob.flag==0)
    	break;
 }	
 else
 {
 	continue;
 }	
}
if(ob.flag == 1)
cout << '\n' << "The string does not exist ! " << endl;
}