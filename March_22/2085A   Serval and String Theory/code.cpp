#include<iostream>
#include<string>
#include<algorithm>
#include<cstring>
using namespace std;
void solve(int n , int k, string s){
    char c[100];  
        strcpy(c, s.c_str());
        if(n==1){
            cout<<"no"<<endl;
            return;
        }
        bool same_all=true;
        for(int i=0; i<n-1; i++){
            if(c[i]!=c[i+1]){
                same_all=false;
                break;
            }
        }
        if(same_all==true){
            cout<<"no"<<endl;
            return;
        }
        if(k>=1){
            cout<<"yes"<<endl;
            return;
        }
        if(k==0){
            string rev_s=s;
            reverse(rev_s.begin(),rev_s.end());
            if(rev_s>s){
                cout<<"yes"<<endl;
                return;
            }
        }
        cout<<"no"<<endl;
        return;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        solve(n,k,s);
    }
    return 0;
}
