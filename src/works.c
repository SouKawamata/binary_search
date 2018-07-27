#include <stdio.h>

int n;
int k;
int A[100000];

int p(int m){
  //k人全員の仕事量がm以下で収まる
  int sum = 0;
  int rest = k-1;
  for(int i = 0;i < n; i++){
    if(A[i] > m) return 0;
    if(A[i] + sum <= m){
      sum += A[i];
    }
    else{
      rest--;
      sum = A[i];
    }
  }
  return rest >= 0;
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
