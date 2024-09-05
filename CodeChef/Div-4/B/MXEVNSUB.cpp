#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int n, i;
	    cin >> n;
	    long long int sum = 0;
	    for(i = 1; i <= n; i++){
	        sum += i;
	    }
	    if(sum % 2 == 0){
	        cout << i-1 << endl;
	    }else{
	        cout << i-2 <<endl;
	    }
	}
	return 0;
}
