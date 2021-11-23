#include<bits/stdc++.h>
using namespace std;
int main(){
int n;
cin>>n;
vector<int>score(n);
for(int score_i=0; score_i<n;score_i++){
    cin>>score[score_i];
}
int max =score[0];
int min = score[0];

int most =0;
int least=0;
for(int i=1;i<n;++i){
    if(score[i]>max){
        ++most;
        max=score[i];
    }
    if(score[i]<min){
        ++least;
        min=score[i];
    }
}
cout<< most<<" "<<least;
return 0;

}
