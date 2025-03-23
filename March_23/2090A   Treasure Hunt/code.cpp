#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x,y,a;
        cin>>x>>y>>a;
        int meters=0;
        int ans=0;
        a=a%(x+y);
        while(meters<=(a+1)){
            if(ans%2==0||ans==0){
            meters+=x;
            ans++;
            if(meters>=(a+1)){
                cout<<"no"<<endl;
                break;
            }
            }
            else{
                meters+=y;
                ans++;
                if(meters>=(a+1)){
                    cout<<"yes"<<endl;
                    break;
                }
            }
        }
    }
    return 0;
}
