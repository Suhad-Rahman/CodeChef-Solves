#include<stdio.h>
int main(){
int n, i, num, rem, sum;
scanf("%d", &n);
for(i=0;i<n;i++){
    scanf("%d", &num);
    sum=0;
    while(num!=0){
        rem=num%10;
        sum+=rem;
        num/=10;
    }
    printf("%d\n", sum);
}
return 0;
}