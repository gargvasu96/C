#include <stdio.h>
int main(){
  int i,j,A[100][100],top,left,right,bottom,m,n;
  scanf("%d %d",&m,&n);
  i=0;
  while (i<m){
    for (j=0; j<n; j++){
        scanf("%d",&A[i][j]);
    }
    i++;
  }
  top = 0;
  bottom = n-1;
  left = 0;
  right = m-1;
  while (top <= bottom && left <= right) {
    for (i = left;i <= right;i++){
      printf("%d ",A[top][i]);
    }
    top++;
    for (i = top;i <= bottom;i++){
      printf("%d ",A[i][right]);
    }
    right--;
    for (i = right;i >= left;i--){
      printf("%d ",A[bottom][i]);
    }
    bottom--;
    for (i = bottom;i >= top; i--){
      printf("%d ",A[i][left]);
    }
    left++;
  }
  return 0;
}
