/*Program to show how a friend function can use objects of 2 different classes

Here we have taken 2 classes and using objects of respective class we have calculated the sum
*/

#include<iostream>
using namespace std;
class value2;
class value1{
    int num1;
    friend int add(value1 &,value2 &);
    public:
        value1(int num1):num1(num1){

        }
};
class value2{
    int num2;
    friend int add(value1 &,value2 &);
    public:
        value2(int num2):num2(num2){
            
        }
};
int add(value1 &obj1,value2 &obj2){
    return (obj1.num1+obj2.num2);
}
int main(){
    int num1,num2;
    cout<<"Enter two numbers : ";
    cin>>num1>>num2;
    value1 obj1(num1);
    value2 obj2(num2);
    cout<<add(obj1,obj2)<<endl;
    return 0;
}