#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int b[n-2];
        for(int i=0; i<n-2; i++){
            cin>>b[i];
        }
        bool result = false;
        for(int i=1; i<n-3; i++){
            if(b[i-1]==1&&b[i]==0&&b[i+1]==1){
                result=true;
                break;
            }
        }
        if(result){
            cout<<"no"<<endl;
        }
        else{
            cout<<"yes"<<endl;
        }
    }
    return 0;
}
