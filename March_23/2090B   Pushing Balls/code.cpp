#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool is_possible(vector<vector<int>> &arr, int i ,int j){
    if(i==0||j==0){
        return true;
    }
    int left=-1;
    int up=-1;
    int row=i;
    int col=j;
    while(col>0){
        if(arr[row][col-1]==0){
            left = 0;
            break;
        }
        col--;
    }
    row=i;
    col=j;
    while(row>0){
        if(arr[row-1][col]==0){
            up=0;
            break;
        }
        row--;
    }
    if(left==0&&up==0){
        return false;
    }
    return true;
}
void solve(int n, int m, vector<vector<int>> &arr){
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j]==1){
                if(!(is_possible(arr,i,j))){
                    cout<<"no"<<endl;
                    return;
                }
            }
        }
    }
    cout<<"yes"<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        vector<vector<int>> arr(n,vector<int> (m,0));
        for(int i=0; i<n; i++){
            string s;
            cin>>s;
            for(int j=0; j<m; j++){
                arr[i][j]=s[j]-'0';
            }
        }
        solve(n,m,arr);
    }
    return 0;
}
