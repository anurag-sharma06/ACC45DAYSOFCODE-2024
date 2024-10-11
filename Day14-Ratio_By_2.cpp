#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	
	while(t--){
	    int f,s;
	    cin >> f >> s;
	    
	    int larger, smaller;
	    if(f > s){
	        larger = f;
	        smaller = s;
	    }
	    else{
	        larger = s;
	        smaller = f;
	    }
	    
	    if(larger >= 2*smaller){
	        cout << 0 << endl;
	    }
	    else{
	        int add, sub;
	        add = 2*smaller - larger;
	        sub = abs(larger/2 - smaller);
	        
	        if(add < sub){
	            cout << add << endl;
	        }
	        else{
	            cout << sub << endl;
	        }
	    }
	}
}