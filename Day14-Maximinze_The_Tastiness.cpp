#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b, c, d;
	    cin >> a >> b >> c >> d;
	    
	    int first = a;
	    if(b > a){
	        first = b;
	    }
	    
	    int second = c;
	    if(d > c){
	        second = d;
	    }
	    
	    cout << first + second << endl;
	}
}