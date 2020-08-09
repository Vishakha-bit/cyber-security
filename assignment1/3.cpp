//write  a c++ program that list down all the prime number in a range between  a and b where  a and  b are two whole number.
#include<iostream>
using namespace std;
int main(){
int a ,b ,i;
cout<<"enter two number :";
cin>>a>>b;
for(i=a; i<=b; i++)
    {
        bool isprime=1l;
        for(int j=2;j<i; j++)
        {
          if(i%j==0)
           isprime=0;
           break;

        }
      //  if(isprime==0)
//cout<<i<<"is a prime number";
//else
//cout<<i<<"is not a prime number";
//return 0;
        if(isprime)
        cout<<i;

    }
    return 0;

}
