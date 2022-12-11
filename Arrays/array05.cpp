/*Program to print the numbers which are divisible by 
5 in the given array:*/
#include<iostream>
using namespace std;

int main(){
    int arr[]={5,11,22,33,55,100};
    for(int i=0;i<6;i++){
        if(arr[i]%5==0){
            cout<<arr[i]<<endl;
        }
    }
    return 0;
}