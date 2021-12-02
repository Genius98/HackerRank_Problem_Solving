#include<iostream>
using namespace std;
long int rev(long int a)
{
int n=0; //for reversing

while(a!=0){
    n=n*10+a%10;//
    a=a/10;
}
return n;
}
int main(){
long int i,j,k,y=0;
cin>>i>>j>>k;
for(i;i<=j;i++)
{
    long int x;
    x=rev(i)-i;
    if(x%k==0)
    {
        y++;
    }
}
cout<<y;
return 0;
}
