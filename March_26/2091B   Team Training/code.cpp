#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x; 
        cin>>n>>x;
        vector<int> skills(n);
        for(int i=0; i<n; i++){
            cin>>skills[i];
        }
        sort(skills.begin(),skills.end(),greater<int>());
        int ans=0;
        int member=1;
        int minskill=-1;
        for(int i=0 ;i<n; i++){
            minskill=skills[i];
            if(minskill*member>=x){
                ans++;
                member=1;
            }
            else{
            member++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}
