#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        vector<int> b(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        for(int i=0; i<n; i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int diff_nu_a=1;
        for(int i=0; i<n-1; i++){
            //int num=a[0];
            if(a[i]!=a[i+1]){
                diff_nu_a++;
            }
        }
        int diff_nu_b=1;
        for(int i=0; i<n-1; i++){
            //int num=b[0];
            if(b[i]!=b[i+1]){
                diff_nu_b++;
            }
        }
       if((diff_nu_a>=3&&diff_nu_b>=0)||(diff_nu_a==2&&diff_nu_b>=2)||
       (diff_nu_a==1&&diff_nu_b>=3)){
           cout<<"yes"<<endl;
       }
       else{
           cout<<"no"<<endl;
       }
    }
    return 0;
}
