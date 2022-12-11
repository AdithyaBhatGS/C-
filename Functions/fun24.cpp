#include<iostream>
using namespace std;
int main(){
    long int num;
    int count=0,m=0,i=9,val=0,z=10;
    char arr[z];
    z--;
    cin>>num;
    while(num>0){
        val=num%16;
        if(val>9 && val<16){
            arr[z]=val+65-10;
        }  
        else if(val<=9){
            arr[z]=val+48;
        }
        num=num/16;          
        z--;
    }
    for(int i=9;i>=0;i--){
        if(arr[i]>='0' && arr[i]<='9')
            count++;
        else if(arr[i]>='A' && arr[i]<='F')
            count++;
    }
    char a[count];
    m=count-1;
    while(i>=0 && m>=0){
        if(arr[i]>=48 && arr[i]<=57){
            a[m]=arr[i];
            m--;
        }
        else if(arr[i]>=65 && arr[i]<=70){
            a[m]=arr[i];
            m--;
        }
        i--;
    }
    cout<<a;
    return 0;
}