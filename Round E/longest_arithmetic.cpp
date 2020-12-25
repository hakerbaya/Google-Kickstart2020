#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;cin >> t;
    for(int tc=1;tc<=t;tc++){
        int s;cin >> s;
    int x=1;int y =1;
    vector<int> vc;
    
    for(int i=0;i<s;i++){
        int item;cin >> item;
        vc.push_back(item);
    }
    int dif = vc[0] - vc[1];
    for(int i=1;i<s-1;i++){
        int diff = vc[i] - vc[i + 1];
			if(dif != diff) {
				dif = diff;
			    y = 1;
			} else{
			    ++y;
				x = max(x,y);
		}
    }
    
    cout << "Case #"<<tc<<": "<< x+1<<endl;
    }
    
}