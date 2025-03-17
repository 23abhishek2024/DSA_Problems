#include<iostream>
using namespace std;
int name(int n ,int k){
    int count = 0;
    //while(k>=1){
    while(k<=n&&k>=1){
        count=count+n/(k);
        n=n%(k);
    }
    if(n!=0){
        return count+1;
    }
    else{
    return count;
    }
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int ans=0;
        if(k%2!=0){
            n=n-k;
            ans=ans+1;
            if(n>0){
            ans=ans+name(n,k-1);
            }
        }
        else{
            ans=ans+name(n,k);
        }
        cout<<ans<<endl;
    }
    return 0;
}
