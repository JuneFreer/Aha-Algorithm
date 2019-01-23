
#include <stdio.h>

struct student //创建一个student结构体，包含一个char型数组name(长21)和一个char型变量score
{
  char name[21];
  char score;
};

int main()
{
  struct student a[100], k; //声明一个student型的数组a长100，和一个student型的变量k
  int i, j, n;
  scanf("%d", &n); //要输入的人名和分数的个数为n
  printf("Enter %d names and scores: ", n);
  for(i = 1; i <= n; i++)
    scanf("%s %d", &a[i].name, &a[i].score); //循环的读入人名和分数
  printf("\n");

  //冒泡排序
  for(i = 1; i <= n - 1; i++){ //遍历数组第i趟
    for(j = 1; j <= n - i; j++){ //比较第j和第j+1个元素的score
      if(a[j].score < a[j+1].score){ //交换，如果左边比较大，就和右边的互换
        k = a[j];
        a[j] = a[j+1];
        a[j+1] = k;
      }
    }
  }
  for(i = 1; i <= n; i++)
    printf("%s\n", a[i].name);

  return 0;
}


/*
#include <stdio.h>
struct student
{
  char name[21];
  char score;
};
int main()
{
  struct student a[100],t;
  int i,j,n;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
    scanf("%s %d",a[i].name,&a[i].score);

  for(i=1;i<=n-1;i++){
    for(j=1;j<=n-i;j++){
      if(a[j].score<a[j+1].score){
        t=a[j]; a[j]=a[j+1]; a[j+1]=t;
      }
    }
  }
  for(i=1;i<=n;i++)
    printf("%s\n",a[i].name);

  return 0;
}
*/
