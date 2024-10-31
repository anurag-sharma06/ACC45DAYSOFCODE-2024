#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int p, q;
	    cin >> p >> q;
	    int r = p + q + 1;
	    if(r % 4 == 1 || r % 4 == 2){
	        cout << "Alice" << endl;
	    }
	    else{
	        cout << "Bob" << endl;
	    }
	}
}