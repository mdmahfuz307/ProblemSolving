#include<bits/stdc++.h>
using namespace std;

int main()
{
  long long int a;
  cin >> a;
  long long int cpy =a;
  long long int c1,c2;
  if(a>0)
  cout<<a<<endl;

if(a <0)
{
  c1 = cpy /10;
  a =a/100;
  c2 =  a * 10 + (cpy % 10);

  if(c1 > c2)
  cout << c1<<endl;

  else
  cout<<c2<<endl;
}






}
