// I will describe here the most naive method of performing repeated squaring. As found on Wikipedia, the main formula is:

// x^n = x*((x^2)^(n-1)/2) , if n is odd
//       (x^2)^(n/2), if n is even

// A brief analysis of this formula (an intuitive analysis if you prefer), based both on its recursive formulation and on its implementation allows us to see that the formula uses only O(log2n) squarings and O(log2n) multiplications!

// This is a major improvement over the most naive method described in the beginning of this text, where we used much more multiplication operations.

// Below, I provide a code which computes baseexp % 1000000007, based on wikipedia formula:


#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll exponen(ll a, ll b);
class expo{
public:
ll a;
void operator^(expo ob);
};
void expo ::  operator^(expo ob)
{
 a  = exponen(a,ob.a);
}
ll exponen(ll a, ll b)
{
 if(b==1)
 	return a;
 else
 {
 	if(b%2==0)
 	{
      long long base1 = pow(exponen(a,b/2),2);
      if(base1>=1000000007)
      	return base1%1000000007;
      else
      	return base1;
 	}	
 	else
 	{
      long long ans = (a*pow(exponen(a,(b-1)/2),2));
       if(ans >= 1000000007)
       return ans%1000000007;
        else
            return ans;
 	}
 }
}
int main(){
expo ob1;
expo ob2;	
cout << "Enter Exponent" << endl;
cin >> ob2.a;
cout << "Enter Base" << endl;
cin >> ob1.a;
ob1^ob2;
cout << pow(5,2) << endl;
cout << "Final Exponentiation answer : " << ob1.a << endl;
}