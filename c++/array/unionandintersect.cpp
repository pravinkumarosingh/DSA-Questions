#include<iostream>
#include<vector>
using namespace std;


void arrayUnion(int a[],int b[], int n, int m){
    vector<int> unionvec;
    for(int i=0;i<n;i++){
        unionvec.push_back(a[i]);
    }
    
    for(int j=0;j<m;j++){
        if(unionvec[j]!=b[j]){
           unionvec.push_back(b[j]);
        }
    }
    
    for(int i=0;i<unionvec.size();i++){
        cout<<unionvec[i]<<" ";
    }
    cout<<"\n";
}

void arrayIntersection(int a[], int b[], int n, int m){
    vector<int> intervec;
    
    if(n>m){
        for(int i=0;i<n;i++){
            if(a[i]==b[i]){
                intervec.push_back(a[i]);
            }
            
        }
    }
    else{
        for(int i=0;i<m;i++){
            if(a[i]==b[i]){
                intervec.push_back(b[i]);
            }
        }
    }
    
    for(auto x:intervec){
        cout<<x<<" ";
    }
}





int main(){
    int n , m;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    cin>>m;
    int b[m];
    for(int j=0;j<m;j++){
        cin>>b[j];
    }
    
    arrayUnion(a,b,n,m);
    arrayIntersection(a,b,n,m);
    return 0;
}
