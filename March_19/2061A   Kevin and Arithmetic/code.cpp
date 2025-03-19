#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        int even_number=0;
        int odd_number=0;
        for(int i=0; i<n; i++){
            if(arr[i]%2==0){
                even_number+=1;
            }
            else{
                odd_number+=1;
            }
        }
        if(even_number==0){
            cout<<odd_number-1<<endl;
        }
        else{
            cout<<odd_number+1<<endl;
        }
    }
    return 0;
}
