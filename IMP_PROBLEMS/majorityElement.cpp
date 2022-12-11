#include<iostream>
using namespace std;
int majority_Element(int a[],int size){
    int count=0,majority=0;
    for(int i=0;i<size;i++){
        if(count==0)
            majority=a[i];
        if(majority==a[i])
            count+=1;
        else
            count-=1;
    }
    return majority;
}
bool isMajority(int a[],int size,int n){
    int count=0;
    for (int i = 0; i < size; i++)
    {
        if(a[i]==n)
            count+=1;
    }
    if(count>(size/2))
        return true;
    else
        return false;
}
int main(){
    int a[]={1,3,3,2,3,2,1,3,3,2,1,3,3};
    int size=sizeof(a)/sizeof(a[0]);
    int n=majority_Element(a,size);
    if(isMajority(a,size,n))
        cout<<"Majority Element : "<<n<<endl;
    else
        cout<<"No majority element!"<<endl;
    return 0;
}