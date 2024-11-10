#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n, a, b;
	    cin >> n >> a >> b;
	    int tm = 0;
	    while(n > 1){
	        tm = tm + a;
	        n = n/2;
	        if(n > 1){
	            tm = tm + b;
	        }
	    }
	    cout << tm << endl;
	}
}