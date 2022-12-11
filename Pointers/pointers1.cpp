//Program to add two numbers using pointers
#include<stdio.h>
int add(int *p1,int *p2){
    int sum=(*p1)+(*p2);
    return sum;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int *ptr1=&num1;
    int *ptr2=&num2;
    printf("%d",add(ptr1,ptr2));
    return 0;
}