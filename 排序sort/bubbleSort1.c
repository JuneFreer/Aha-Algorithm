/*
#include <stdio.h>

int main()
{
  int a[100], i, j, k, n;
  scanf("%d", &n); //输入n个数
  for(i = 1; i <= n; i++)
    scanf("%d", &a[i]); //循环将输入的数放进数组a中

  for(i = 1; i <= n - 1; i++){ //遍历数组n-1趟
    for(j = 1; j <= n - i; j++){ //第i趟，比较从1到n-i的数，归位倒数第i个数
      if(a[j] < a[j+1]){ //从大到小排序，把小的交换到右边
        k = a[j];
        a[j] = a[j+1];
        a[j+1] = k;
      }
    }
  }

  for(i = 1; i <= n; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
*/

#include <stdio.h>

int main()
{
  int a[100], i, j, k, n;
  scanf("%d", &n); //输入n个数
  for(i = 1; i <= n; i++)
    scanf("%d", &a[i]); //循环将输入的数放进数组a中

  for(i = 1; i <= n - 1; i++){ //遍历数组n-1趟
    for(j = 1; j <= n - i; j++){ //第i趟，比较从1到n-i的数，归位倒数第i个数
      if(a[j] > a[j+1]){ //从小到大排序，把大的交换到右边
        k = a[j];
        a[j] = a[j+1];
        a[j+1] = k;
      }
    }
  }

  for(i = 1; i <= n; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
