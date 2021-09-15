
// It's sufficient to search for prime factors in the range [1,√N], 
// and then use them in order to compute the prime factors in the range [√N,N].
// If no prime factors exist in the range [1,√N], 
// then N itself is prime and there is no need to continue searching beyond that range.


#include<bits/stdc++.h>

using namespace std;
class prime;
void print_prime(prime ob);
class prime{
private:
int r;
prime()
{
 cout << "Finding Prime Numbers for the given range ..." << endl;   
}
friend void print_prime(prime ob);
friend int main();
};

void print_prime(prime ob)
{
  int flag; 
  for(int i=1;i<=ob.r;i++)
  {
    flag =0;
    for(int y=2;y<=(int)sqrt(i);y++)
    {
      if(i%y==0)
      {   
      flag =1;
      break;
      } 
    }
    if(flag==0)
    cout << i << "  ";   
  }  
}

int main()
{
 int range;
 cout << "Enter the number upto which you want to find prime numbers " << endl;
 cin >> range;
 prime ob;
 ob.r = range;
 print_prime(ob);
}