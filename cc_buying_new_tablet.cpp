#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int n ,b;
	    cin >> n >> b;
	    vector<int> w(n);
	    vector<int> h(n);
	    vector<int> p(n);
	    for(int i = 0; i < n; i++){
	        cin >> w[i] >> h[i] >> p[i];
	    }
	        
	   int ma = 0;
	   for(int i = 0 ; i < n; i++){
	       if(p[i] <= b){
	           ma = max(ma,w[i] * h[i]);
	       }
	   }
	   if(ma == 0)
	        cout << "no tablet" << endl;
	   else
	        cout << ma << endl;
	}

}
