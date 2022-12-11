/*Program to find the diagonal elements in a 2d array*/
#include<iostream>
using namespace std;
int diagonal_Sum(int *p,int rows,int columns){
    int sum=0,i=0,j=0;
    while(i<rows && j<columns){
        if(i==j)
            sum+=*p;
            p+=columns+1;
        i+=1;
        j+=1;
    }
    return sum;   
}
void readArray(int *ptr,int rows,int columns){
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cin>>*(ptr);
            ptr+=1;
        }
    }   
}
int main(){
    int rows,columns;
    cin>>rows>>columns;
    int arr[rows][columns];
    readArray(&arr[0][0],rows,columns);
    int a=diagonal_Sum(&arr[0][0],rows,columns);
    cout<<"Sum = "<<a<<endl;
    return 0;
}