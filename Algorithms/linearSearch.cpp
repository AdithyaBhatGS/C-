#include<iostream>
using namespace std;
int LinearSearch(int A[],int N,int key){
    for (int i = 0; i < N; i++) {
        if(A[i]==key)
            return i;
    }
    return -1;
}
int main(){
    int N,key;
    cin>>N;
    int A[N];
    for(int i=0;i<N;i++){
        cin>>A[i];
    }
    cin>>key;
    int a=LinearSearch(A,N,key);
    cout<<a<<endl;
    return 0;
}