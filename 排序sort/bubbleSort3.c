#include <stdio.h>

int main()
{
  int a[101], i, j, t, n;
  scanf("%d", &n);
  for(i = 1; i <= n; i++)
    scanf("%d", &a[i]); //循环读入n个数到数组a
  //冒泡排序
  for(i = 1; i <= n; i++){
    for(j = 1; j <= n - i; j++){
      if(a[j] > a[j+1]){
        t = a[j]; //交换
        a[j] = a[j+1];
        a[j+1] = t;
      }
    }
  }
  //去重输出
  printf("%d ", a[1]); //输出第一个数
  for(i = 2; i <= n; i++){
    if(a[i] != a[i-1])
      printf("%d ", a[i]);
  }
  printf("\n");
  return 0;
}
