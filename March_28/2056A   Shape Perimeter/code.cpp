#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m; 
        cin>>n>>m;
        int x,y;
        cin>>x>>y;
        int ans=0;
        for(int i=1; i<n; i++){
            cin>>x>>y;
            ans=ans+x+y;
        }
        ans=2*m+ans;
        cout<<2*ans<<endl;
    }
    return 0;
}
