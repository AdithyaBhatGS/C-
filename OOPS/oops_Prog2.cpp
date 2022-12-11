/*Problem Statement:
*Create a class Shape having a field shapeType and a function printMyType(print the shapeType).
*Create another class , Square and Rectangle which inherits the Shape class and has additional fields length and breadth.
*Both Square and Rectangle will have 2 functions calculateArea method after creating the object of class Rectangle having length equal to 5 and breadth equal to 4 and again call printMyType and calculateArea method*/

#include<iostream>
using namespace std;
class Shape{
    public:
        string shapeType;
        void printMyType(){
            cout<<shapeType<<endl;
        }
};
class Square:public Shape{
    public:
        int length;
        int calculateArea(){
            return length*length;
        }
        void printMyType(string shapeType){
            cout<<shapeType<<endl;
        }
};
class Rectangle:public Shape{
    public:
        int length,breadth;
        int calculateArea(){
            return length*breadth;
        }
        void printMyType(string shapeType){
            cout<<shapeType<<endl;
        }
};
int main(){
    Square s;
    s.printMyType("Square");
    s.length=10;
    cout<<"Area of Square : "<<s.calculateArea()<<endl;
    Rectangle r;
    r.printMyType("Rectangle");
    r.length=12;
    r.breadth=10;
    cout<<"Area of Square : "<<r.calculateArea()<<endl;
    return 0;
}