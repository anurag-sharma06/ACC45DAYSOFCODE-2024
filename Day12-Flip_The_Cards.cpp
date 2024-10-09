#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    int total, facedUp;
	    cin >> total >> facedUp;
	    int facedDown = total - facedUp;
	    
	    if(facedDown < facedUp){
	        cout << facedDown << endl;
	    }
	    else{
	        cout << facedUp << endl;
	    }
	}
}