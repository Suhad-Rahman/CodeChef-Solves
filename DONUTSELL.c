#include <stdio.h>

int main() {
    int T;
    scanf("%d", &T);
    
    for(int t=0; t < T ; t++){
        int N, M;
        scanf("%d %d", &N, &M);
        int A[N];
        for(int i=0; i< N; i++) {
            scanf("%d", &A[i]);
        }
        
        int B[M];
        for(int i=0; i<M;i++){
            scanf("%d", &B[i]);
        }
        int sad_customers = 0;
        
        for(int i=0; i<M; i++){
            int donut_type= B[i] - 1;
            
            if (A[donut_type] > 0){
                A[donut_type]--;
            }
            else {
                sad_customers++;
            }
        }
        printf("%d\n", sad_customers);
    }
    return 0;
	// your code goes here

}

