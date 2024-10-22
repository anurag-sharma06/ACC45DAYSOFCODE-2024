#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    if(a*10 > b*5){
	        cout << "FIRST" << endl;
	    }
	    else if(b*5 > a*10){
	        cout << "SECOND" << endl;
	    }
	    else{
	        cout << "ANY" << endl;
	    }
	}
}