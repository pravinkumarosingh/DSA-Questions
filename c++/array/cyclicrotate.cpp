#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n){
     int p=arr[n-1];
     int temp[n];
     for(int i=0;i<=n;i++){
         temp[i]=arr[i];
     }
     
     arr[0]=p;
     for(int i=0;i<=n;i++){
         arr[i+1]=temp[i];
     }
     
     for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
     }
    cout<<"\n";
}

int main()
 {
	//code
	int t;
	cin>>t;
	
	while(t--){
	    int n;
	    cin>>n;
	    int arr[n];
	    for(int i=0;i<n;i++){
	        cin>>arr[i];
	    }
	    rotate(arr,n);
	}
	return 0;
}
