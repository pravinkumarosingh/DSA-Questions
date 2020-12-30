#include<iostream>
#include<string>
#include<algorithm>
using namespace std;


int isPlaindrome(string S)
	{
	    // Your code goes here
	    int j = S.size()-1;
	    for(int i=0;i<S.size();i++){
	        if(S[i]!=S[j]){
	            return 0;
	        }
	        j--;
	    }
	    return 1;
	}


int main(){
    string S;
    getline(cin, S);
    cout<<isPlaindrome(S);
    return 0;
}
