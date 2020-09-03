#include<bits/stdc++.h>
#include<iostream>
#include<stdlib.h>
using namespace std;

	long int t;
	long int n;
	long int x;

int main(){

	cin >> t;

	for(long int tcase=0;tcase<t;tcase++){
		cin >> n;
		cin >> x;
		long int ans = 0;
		vector <long int> cont(n);

		for(long int i=0;i<n;i++){
			cin >> cont[i];
		}

		// case where forall i cont[i] are same
		if( x >= cont[0] ){
			cout << n << "\n";
			//cout << "in";
		}
		if(x < cont[0]){
			int t1 = cont[0];

			while(cont[0]>0){
				cont[0] -= x;
				cont[0] *= 2;
				if(cont[0] > t1 )
					cont[0] = cont[1];
				x *= 2;
				ans++;
				//cout << cont[0] << " " << x << " " << ans << "\n";
			}
			
		cout << (ans + n - 1 ) << "\n" ;
		}

	}

	return 0;
}