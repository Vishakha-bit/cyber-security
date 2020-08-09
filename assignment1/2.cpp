#include<iostream>
#include<string.h>
using namespace std;
int main(){
char str[100];
int count=0,n,i;
cin>>str;
n=strlen(str);
for(i=0; i<n/2;i++){
            {
              if(str[i]==str[n-i-1])
                     count++;
            }
}
if(count==n/2)
cout<<"string is a palindrome";
else
cout<<"string is not a palindrome";
return 0;
}





