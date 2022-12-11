/*Program to search an element in an array using recursion

Working:

Ex:
size=6
arr[]={28,32,51,3,7,99}
ele=99

linearSearch(int arr[],int size,int i,int searchEle){
    if(0>=6)
        false
    if(28==99)
        false
    linearSearch(arr,6,1,99)    
}

linearSearch(arr,6,1,99){
    if(1>=6)
        false
    if(32==99)
        false
    linearSearch(arr,6,2,99)
}

linearSearch(arr,6,2,99){
    if(2>=6)
        false
    if(51==99)
        false
    linearSearch(arr,6,3,99)
}

linearSearch(arr,6,3,99){
    if(3>=6)
        false
    if(3==99)
        false
    linearSearch(arr,6,3,99)
}

linearSearch(arr,6,4,99){
    if(4>=6)
        false
    if(7==99)
        false
    linearSearch(arr,6,5,99)
}

linearSearch(arr,6,5,99){
    if(5>=6)
        false
    if(99==99)
        true
        return 5
}

*/

#include<iostream>
using namespace std;
int linearSearch(int arr[],int size,int i,int searchEle){
    if(i>=size)
        return -1;
    if(arr[i]==searchEle)
        return i;
    linearSearch(arr,size,i+1,searchEle);
}
int main(){
    int ele;
    cin>>ele;
    int arr[6]={28,32,51,3,7,99};
    int size=sizeof(arr)/sizeof(arr[0]);
    int present_or_not=linearSearch(arr,size,0,ele);
    cout<<present_or_not<<endl;
    return 0;
}