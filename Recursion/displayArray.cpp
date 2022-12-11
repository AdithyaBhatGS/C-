/*Display array elements using recursion*/
/*
Working:
size=5,arr[]={11,20,-12,19,4}
printArray(a,5){
    5<0 false
    printArray(a,4)
    print->a[5]
}
printArray(a,4){
    4<0 false
    printArray(a,3)
    print->a[4]
}
printArray(a,3){
    3<0 false
    printArray(a,2)
    print->a[3]
}
printArray(a,2){
    2<0 false
    printArray(a,1)
    print->a[2]
}
printArray(a,1){
    1<0 false
    printArray(a,1)
    print->a[1]
}
printArray(a,0){
    0<0 false
    printArray(a,-1)
    print->a[0]
}
printArray(a,-1){
    -1<0 true
}


*/
#include<iostream>
using namespace std;
void printArray(int a[],int i){
    if(i<0)
        return;
    printArray(a,i-1);
    cout<<a[i]<<" ";
}
void readArray(int a[],int size){
    for(int i=0;i<size;i++){
        cin>>a[i];
    }
}
int main(){
    int size;
    cin>>size;
    int arr[size];
    readArray(arr,size);
    printArray(arr,size-1);
    return 0;
}