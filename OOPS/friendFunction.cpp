/*Friend Function:
It is a special function which has the ability to access private data members of a class.

Note:Any other function including main function cannot access a private data members of a class*/

#include<iostream>
using namespace std;
class Rectangle{
    int length,breadth;
    friend int calculateArea(Rectangle &);
    public:
        Rectangle(int length,int breadth){
            this->length=length;
            this->breadth=breadth;
        }
};
int calculateArea(Rectangle &obj){
    return (obj.length*obj.breadth);
}
int main(){
    int length,breadth;
    cout<<"Enter the length and breadth of a rectangle:"<<endl;
    cin>>length>>breadth;
    Rectangle r(length,breadth); 
    cout<<calculateArea(r)<<"\n";
    return 0;
}