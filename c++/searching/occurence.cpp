#include<iostream>
using namespace std;

void index(int arr[], int n, int k){
    int i,first=0,last=0;
    for(i=0;i<n;i++){
        if(arr[i]==k){
            first=i;
            cout<<first<<" ";
            break;
        }
    }
    
    int j=n;
    while(j--){
        if(arr[j]==k){
            last=j;
            cout<<last;
            break;
        }
        
    }
    if(first==0 && last==0){
        cout<<"-1";
    }
    cout<<"\n";
    
    
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        index(arr, n, k);
    }
    
    return 0;
}
