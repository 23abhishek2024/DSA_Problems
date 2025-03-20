#include<iostream>
using namespace std;
int solve(int a ,int b, int d, int e, int c){
    int count=0;
    if(a+b==c){
        count++;
    }
    if(b+c==d){
        count++;
    }
    if(c+d==e){
        count++;
    }
    return count;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,d,e;
        cin>>a>>b>>d>>e;
        int c_1=a+b;
        int c_2=d-b;
        int ans_1 = solve(a,b,d,e,c_1);
        int ans_2 = solve(a,b,d,e,c_2);
        if(ans_1>ans_2){
            cout<<ans_1<<endl;
        }
        else{
            cout<<ans_2<<endl;
        }
    }
    return 0;
}
