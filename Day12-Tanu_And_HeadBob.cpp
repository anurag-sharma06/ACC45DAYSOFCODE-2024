#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	for(int i = 0; i < t; i++){
	    stack<char> st;
	    int n;
	    cin >> n;
	    for(int j = 0; j < n; j++){
	        char temp;
	        cin >> temp;
	        st.push(temp);
	    }
	    
	    while(!st.empty()){
	        int com = st.top();
	        if(com == 'Y'){
	            cout << "NOT INDIAN" << endl;
	            break;
	        }
	        else if(com == 'I'){
	            cout << "INDIAN" << endl;
	            break;
	        }
	        else{
	            st.pop();
	        }
	    }
	    
	    if(st.empty()){
	        cout << "NOT SURE" << endl;
	    }
	}
}