#include<iostream>
using namespace std;
int i,n,j,ans,a[105],b[105];
int main(){
  cin>>n;
  while(i<n){
    cin>>a[i]>>b[i]; i++;
  }
  for(i=0;i<n;i++){
    for(j=0;j<n;j++){
      if(a[i]==b[j]&&i!=j){ans++;break;}
 
    }
  }cout<<n-ans;
}