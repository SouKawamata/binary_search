#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
    //和がmになるような部分列が存在して、それ以外の列を和がm以下になるように分割できる
    int i, j, a, b, c;
    a = 0;
    b = 0;
    c = k;
    while (b < n) {
        for (i = b; i < n; i++) {
            a += A[i];
            b++;
            if(a == m){
                int frag = 1;
                c--;
            }
            if(){
                ;
            }
        }
    }
    
    int main(){
        int i, lb, ub;
        scanf("%d%d", &n, &k);
        for(i = 0; i < n; i++){
            scanf("%d", &A[i]);
        }
        
        lb = 0;
        ub = 1000000000;
        while(ub - lb > 1){
            int m = (lb + ub)/2;
            if(p(m)){
                ub = m;
            }
            else {
                lb = m;
            }
        }
        printf("%d\n",ub);
        
        
        return 0;
    }
