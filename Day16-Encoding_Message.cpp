#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n;
	    cin >> n;
	    string str;
	    for(int i = 0; i < n; i++){
	        char ch;
	        cin >> ch;
	        str.push_back(ch);
	    }
	    
	    for(int i = 0; i < n; i = i + 2){
	        int j = i + 1;
	        if(j < n){
	            swap(str[i], str[j]);
	        }
	    }
	    
	    char arr[26];
	    for(int i = 0; i < 26; i++){
	        arr[i] = 122 - i;
	    }
	    
	    for(int i = 0; i < n; i++){
	        int x = str[i] - 97;
	        str[i] = arr[x];
	    }
	    cout << str << endl;
	}
}