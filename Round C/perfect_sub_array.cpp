#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    scanf("%d",&t);
 
    for(int i=1;i<=t;i++){
	int n;
    scanf("%d",&n);
    int a[n];
    for(int i = 0; i < n; i ++)
        scanf("%d",&a[i]);
    int ans = 0;
    for(int i = 0; i < n; i ++) {
        double total = 0;
        for(int j = i; j < n; j ++) {
            total += a[j];
            double chkr = total;
            chkr = sqrt(chkr);
            if(chkr == floor(chkr))
                ans ++;
        }
    }
   
   printf("Case #%d: %d\n",i,ans);
    }
}