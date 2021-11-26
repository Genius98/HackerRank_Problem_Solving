#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m,i,j=1;
    cin >> n;
    long long int a[n],r[n];

    for(i=0;i<n;i++){
        cin>>a[i];
    }
    cin>>m;
    long long int b[m];
    for(i=0;i<m;i++){
        cin>>b[i];
    }
    r[0]=j;
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            j=j;
        }else{
            j++;
        }
        r[i]=j;
    }
    i=0;
    while(m--){
        if(b[i]>=a[0])
        {
            cout<<r[0]<<endl;
        }
        else if(b[i]>a[n-1])
        {
            n--;
            m++;
        }
        else if(b[i]==a[n-1]){
            cout<<r[n-1]<<endl;
            i++;
        }
        else{
            cout<<r[n-1]+1<<endl;
            i++;
        }
    }
    return 0;
}
