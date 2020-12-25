/***
    Google Kickstart 2020
    Author : Mubashir Ahmad
    Retype
    Round H
**/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     
     int t; cin >> t;
     for(int tc = 1;tc <=t;tc++){
         ll n,k,s;cin >> n>> k >> s;
         ll out1 = (k-1)+(k-s)+(n-s+1);
         ll out2 = (k-1)+1+n;
         cout << "Case #"<<tc<<": "<<min(out1,out2)<<"\n";
    }
}