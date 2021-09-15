//Basic Euclidean Algorithm for GCD 
// The algorithm is based on the below facts. 

// If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting // repeatedly the larger of two, we end up with GCD.
// Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.

#include<bits/stdc++.h>

using namespace std;

class GCD{
private:
int a,b,res;
public:
GCD(int a,int b){

this->a =a;
this->b = b;

int d1 = a>=b ? a:b;
int d2 = a<=b ? a:b;
int rem;

  while(d2!=0)
  {
    rem  = d1%d2;
    d1 = d2;
    d2 = rem; 
  }	
  res = d1;
}	
 friend int main();
};


int main(){
 int a,b;
 cout << "Enter the first number for which GCD is to be calculated" << endl;
 cin >> a;
 cout << "Enter the second number for which GCD is to be calculated" << endl;
 cin >> b; 
 GCD ob(a,b);
 cout << "GCD of two numbers is : " << ob.res << endl;
}