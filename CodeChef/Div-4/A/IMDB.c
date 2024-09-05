#include <stdio.h>

#include <stdlib.h>


int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n, x;
        scanf("%d %d",&n,&x);
        int s[n], r[n];
        for(int i=0;i<n;i++){
            scanf("%d %d",&s[i],&r[i]);
        }
        int maxs = x;
        int maxr = 0;
        for(int i=0;i<n;i++){
            if(s[i]<=maxs){
                if(r[i]>maxr){
                    maxr = r[i];
                }
            }
        }
        printf("%d\n",maxr);
    }
    return 0;
}