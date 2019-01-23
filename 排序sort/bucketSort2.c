#include <stdio.h>

int main()
{
  int bucket[1001], i, j, t, n; //n是输入的数的个数，也就是要扫描的数的个数
  for(i = 0; i <= 1000; i++)
    bucket[i] = 0;

  scanf("%d", &n); //n是输入的数的个数
  for(i = 1; i <= n; i++){ //循环扫入n个数
    scanf("%d", &t); //扫入的数赋给变量t（把数值放入变量t在内存中的地址）
    bucket[t]++; //进行计数
  }

  for(i = 0; i <= 1000; i++) //遍历桶
    for(j = 1; j <= bucket[i]; j++) //桶中的计数大于等于1就循环打印，小于1就跳过不打印
      printf("%d ", i);
  printf("\n");

  return 0;
}
