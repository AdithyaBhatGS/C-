/*CompileTime PolyMorphism(Method Overloading):
When there are two or more function with same name with different number of parameters or different type or both then it is known as function overloading*/
#include<iostream>
using namespace std;
int add(int num1,int num2){
    return num1+num2;
}
int add(int num1,int num2,int num3){
    return num1+num2+num3;
}
double add(int num1,float num2){
    return num1+num2;
}
int main(){
    cout<<add(10,20)<<endl;
    cout<<add(10,20,30)<<endl;
    cout<<add(10,23.3f)<<endl;
    return 0;
}