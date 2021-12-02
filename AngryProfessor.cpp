#include<bits/stdc++.h>
using namespace std;

int main(){
int t,i;
cin>>t;
for(i=0;i<t;i++)
{
    int n,k,j,x=0;
    cin>>n>>k;
    int a[n];//no of students
    for(j=0;j<n;j++){
        cin>>a[j];//array input
        if(a[j]<=0){
            x++;
        }
    }
    if(x>=k)
    {
        cout<<"NO\n";
    }
}
}

