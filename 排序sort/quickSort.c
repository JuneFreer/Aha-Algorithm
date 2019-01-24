/*从小到达排序*/
#include <stdio.h>

int a[101], n; //全局变量

void quickSort(int left, int right)
{
  int i, j, k, base;
  if(left > right) //left必须小于right
    return;

  base = a[left]; //选最左边的数为基准数 //a[]是全局变量
  i = left; //哨兵i,从左往右寻找大于base的数, i++
  j = right; //哨兵j，从右往左寻找小于base的数, j--

  while(i != j){
    /*必须先j--, 顺序很重要，因为顺序决定了ij相遇时指向的是较小的数而不是较大的数（在此例中，较小的数与base交换才能保证顺序正确）*/
    while(i < j && a[j] >= base) //当ij没有相遇，且j所在的数不小于(>=)基准数时，j继续左移
      j--;
    while(i < j && a[i] <= base) //当ij没有相遇，且i所在的数不大于(<=)基准数时，i继续右移
      i++;
  /*当以上两个while循环都退出了，程序运行到了这里，说明ij都已停下：
  i所在数大于base，j所在数小于base（交换a[i]a[j]）*/
    if(i < j){
      k = a[j];
      a[j] = a[i];
      a[i] = k;
    }
  }
  /*当while(i != j)循环退出，说明此时i == j，此时j所在数小于base，ij相遇（交换此时所在数和base），将此轮基准数归位*/
  a[left] = a[i]; //或a[j]都可以，此时ij在同一处索引，a[i]a[j]指向同一处内存地址，值相同
  a[i] = base; //将base的值存放进a[i]所在内存地址

  //递归的处理剩下的数
  quickSort(left, i - 1); //递归地处理i左边的数
  quickSort(i + 1, right); //递归地处理i右边的数
}

int main()
{
  int i, j, k;
  scanf("%d", &n); // n是全局变量
  for(i = 1; i <= n; i++)
    scanf("%d", &a[i]); //循环读入n个数到数组a

  quickSort(1, n); //形参：left，right，实参：1，n

  for(i = 1; i <= n; i++)
    printf("%d ", a[i]);
  printf("\n");

  return 0;
}
