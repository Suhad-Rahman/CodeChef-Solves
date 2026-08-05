#include<stdio.h>
int main(){
int n, k, i, count=0;
long long in;
scanf("%d %d", &n, &k);
for(i=0; i<n; i++){
    scanf("%lld", &in);
    if((int)in%k==0){
        count++;
    }
}
 printf("%d", count);
return 0;
}