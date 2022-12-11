/*Program to declare the size of the array as 
6elements but initialize only 3 values and print
the array elements to check what values are stored
in the remaining positions:*/
#include<iostream>
using namespace std;

int main(){
    int arr[6]={1,2,3};
    int i=0,j=5;
    cout<<"The elements of the array are:";
    do{
        cout<<arr[i]<<"\t";
        i++;
    }while(i<=j);
    return 0;
}
/*Note:From this we can clearly understand
that if we have specified the array size as
6 or any number but initialized lesser values
then the remaining values of those empty positions
will be by defult "zero"*/