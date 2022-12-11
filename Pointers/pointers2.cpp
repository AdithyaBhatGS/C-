//Program to swap two numbers using pointers
#include<iostream>
void swap(int *ptr1,int *ptr2){
    int temp;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
int main(){
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    printf("----------------\n");
    printf("%d %d\n",num1,num2);
    swap(&num1,&num2);
    printf("%d %d",num1,num2);
    return 0;
}