#include<stdio.h>
int main(){
int x;
float y;
float balance;
scanf("%d %f", &x, &y);

if(x%5==0 && x<=y-0.50){
    printf("%.2f", y-(float)x-0.50);
}
else{
    balance=y;
    printf("%.2f", balance);
}
return 0;
}