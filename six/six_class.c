// #include<stdio.h>
// #include<stdlib.h>
// int ADD(int x,int y)
// {
//     int z = x+y;
//     return z;
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     int sum = ADD(a,b);
//     printf("%d\n",sum);
//     system("pause");
//     return 0;
// }
//========================================
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int ADD(int x,int y)
// {
//     int z = x+y;
//     return z;
// }

// int main(){
//     //strlen - string length -字符串长度
//     //strcpy - string copy - 字符串复制
//     char arr1[] = "bit";
//     char arr2[20] = "***********";
//     strcpy(arr2,arr1);
//     printf("%s\n",arr2);
//     system("pause");
//     return 0;
// }
//================================================
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
// int main(){
//     char arr[] = "hello world";
//     memset(arr,'*',5);
//     printf("%s\n",arr);


//     system("pause");
//     return 0;
// }
//=================交换a与b=========================
////有问题的写法
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// void Swap1(int x,int y)//void的意思是没有返回值
// {
//     int tmp = 0;
//     tmp = x;
//     x = y;
//     y = tmp;
// }

// int main(){
//     int a = 10;
//     int b = 20;
//     printf("a = %d,b = %d\n",a,b);
//     Swap(a,b);
//     printf("a = %d,b = %d\n",a,b);
//     system("pause");
//     return 0;
// }
///////////////
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>

// void Swap2(int* pa,int* pb)//void的意思是没有返回值
// {
//     int tmp = 0;
//     tmp = *pa;
//     *pa = *pb;
//     *pb = tmp;

// }

// int main(){
//     int a = 10;
//     int b = 20;
//     printf("%d,%d\n",a,b);
//     int* pa = &a;
//     int* pb = &b;
//     Swap2(&a,&b);
//     printf("%d,%d\n",a,b);
//     system("pause");
//     return 0;
// }
//==========声明函数================
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"Swap.h"//应用声明函数
int main(){
    int a = 10;
    int b = 20;
    printf("%d,%d\n",a,b);
    int* pa = &a;
    int* pb = &b;
    Swap2(&a,&b);
    printf("%d,%d\n",a,b);
    system("pause");
    return 0;
}