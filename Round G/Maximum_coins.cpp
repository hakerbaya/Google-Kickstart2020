/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Maximum Coins
    Round G
**/

#include <bits/stdc++.h>
using namespace std;

int main() {
    // For Faster Input Output
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;cin >> t;

    for(int tc=1;tc<=t;tc++){
        long long s; cin >> s;
        long long maxx = 0, sum = 0;
		long long i,j;
        long long a[s][s];

    	for (long long i=0;i<s;i++){
            for(long long j=0;j<s;j++){
                cin >> a[i][j];
            }
        }
    	for (long long x=0 ; x<s ; x++) {
			sum = 0;
			i = x;
			j = 0;
			while (i<s && j<s) {
				sum+=a[i++][j++];
			}

			if (sum > maxx){
                maxx = sum;
            }	
		}
        for (long long y=0 ; y<s; y++) {
			sum = 0;
			i = 0;
			j = y;
			while (i<s && j<s) {
				sum+=a[i++][j++];
			}

			if (sum > maxx){
                maxx = sum;
            }	
		}

        cout << "Case #" <<tc<< ": " << maxx << "\n"; 

    }
    
} 