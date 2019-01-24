#include <stdio.h>

int main()
{
  int a[1001], i, t, n;
  for(i = 1; i <= 1000; i++)
    a[i] = 0; //初始化数组

  scanf("%d", &n);
  for(i = 1; i <= n; i++){
    scanf("%d", &t);
    a[t] = 1; //把出现过的编号赋值为1
  }
  for(i = 1; i <= 1000; i++){ //遍历所有桶
    if(a[i] == 1) //把出现过的编号打印出来
      printf("%d ", i);
  }
  printf("\n");
  return 0;
}
