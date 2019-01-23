//从小到大排序
/*
#include <stdio.h>

int main()
{
  int a[11], i, j, t; //已知排序的数在0-11之间，给出11个已经排好序的桶（长为11的数组）
  for(i = 0; i <= 10; i++)
    a[i] = 0; //初始化

  printf("Enter scores(Value between 0 - 10): ");
  for(i = 1; i <= 5; i++){ //循环读入5个数
    scanf("%d", &t);
    a[t]++; //计数
  }

  for(i = 0; i <= 10; i++) //一次遍历a[0]到a[10]
    for(j = 1; j <= a[i]; j++) //a[i]小于1不打印（至少出现一次）
      printf("%d ", i);
      printf("\n");

  printf("press enter to continue...");
  getchar();getchar();
  return 0;
}
*/

//从大到小排序
#include <stdio.h>

int main()
{
  int a[11], i, j, t; //已知排序的数在0-11之间，给出11个已经排好序的桶（长为11的数组）
  for(i = 0; i <= 10; i++)
    a[i] = 0; //初始化

  printf("Enter scores(Value between 0 - 10): ");
  for(i = 1; i <= 5; i++){ //循环读入5个数
    scanf("%d", &t);
    a[t]++; //计数
  }

  for(i = 10; i >= 0; i--) //一次遍历a[0]到a[10]
    for(j = 1; j <= a[i]; j++) //a[i]小于1不打印（至少出现一次), j记录a[i]出现的次数
      printf("%d ", i);
      printf("\n");

  printf("press enter to continue...");
  getchar();getchar();
  return 0;
}
