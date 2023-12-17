#include <bits/stdc++.h>
using namespace std;

int main() {
    int t, k; cin >> t;
    while (t--) {
        cin >> k;
        int pos = 1, cnt = 0, arr[4];
        while (k > 0) {
            int rem = k % 10;
            if (rem != 0) arr[cnt++] = rem * pos;
            pos *= 10;
            k /= 10;
        } cout << cnt << endl;
        for (int i = 0; i < cnt; i++) {
            cout << arr[i] << " ";
        } cout << endl;
    }
}
 	   	   	 	    	  		      		
