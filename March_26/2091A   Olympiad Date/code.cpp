#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int solve(vector<int> &arr , int number , int count){
    int m=arr.size();
    for(int i=0; i<m; i++){
        if(arr[i]==number){
            count--;
        }
        if(count==0){
            return i;
        }
    }
    return -1;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int> arr(n);
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int a=solve(arr,0,3);
        int b=solve(arr,1,1);
        int c=solve(arr,2,2);
        int d=solve(arr,3,1);
        int e=solve(arr,5,1);
        int minnu=min(min(min(min(a,b),c),d),e);
        int maxnu=max(max(max(max(a,b),c),d),e);
        if(minnu>=0){
            cout<<maxnu+1<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}
