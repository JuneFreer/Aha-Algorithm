#include <stdio.h>

int main(){
  int a[102] = {6, 3, 1, 7, 5, 8, 9, 2, 4};
  int head = 0, tail = 9, i;
  while(head != tail){ // head == tail时队列为空
    printf("%d", a[head]); //打印队首元素
    head++; //删除队首元素

    a[tail] = a[head]; //将队首元素赋给tail位置
    tail++;
    head++;
  }

  getchar();getchar();
  return 0;
}
