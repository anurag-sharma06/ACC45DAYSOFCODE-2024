#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--){
	    int N;
	    cin>>N;
	    int arr[N], power=0;
	    for(int i=0;i<N;i++)
	    cin>>arr[i];
	    for(int i=0;i<N;i++){
	        if(arr[i]!=0){
	            power=i;
	        }
	    }
	    cout<<power<<endl;
	}
}