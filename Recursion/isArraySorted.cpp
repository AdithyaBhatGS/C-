/*Program to check if array is sorted using recursion*/

/*Working:
    arr[]=23,42,8,101,200
    isSorted(arr,5,1){
        if(1>=5) false
        return (isSorted(arr,5,2)&&(arr[0]<=arr[1]));
        //return (false && true)-->false
    }
    isSorted(arr,5,2){
        if(2>=5) false
        return (isSorted(arr,5,3)&&(arr[1]<=arr[2]));
        //return (true && false)-->false
    }
    isSorted(arr,5,3){
        if(3>=5) false
        return (isSorted(arr,5,4)&&(arr[2]<=arr[3]));
        //return (true && true)-->true
    }
    isSorted(arr,5,4){
        if(4>=5) false
        return (isSorted(arr,5,5)&&(arr[3]<=arr[4]));
        //return (true && true)-->true
    }
    isSorted(arr,5,5){
        if(5>=5) true
    }
*/

#include<iostream>
using namespace std;
bool isSorted(int arr[],int size,int i){
    if(i>=size)
        return true;
    return (isSorted(arr,size,i+1))&&(arr[i-1]<=arr[i]);
}
int main(){
    int arr[]={23,42,88,88,88};
    int size=sizeof(arr)/sizeof(arr[0]);
    if(isSorted(arr,size,1))
        cout<<"Array is sorted!";
    else
        cout<<"Array is unsorted!";
    return 0;
}