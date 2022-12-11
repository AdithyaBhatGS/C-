/*Problem Statement : 
You have to create 2 classes:

1)SimpleCalculator - Takes input of 2 numbers using a utility function and performs +, -, *, / and displays the results using another function.

2)ScientificCalculator - Takes input of 2 numbers using a utility function and performs any four scientific operation of your chioice and displays the results using another function.

3)Create another class HybridCalculator and inherit it using these 2 classes

4)Create an object of HybridCalculator and display results of simple and scientific calculator.*/

#include<iostream>
#include<math.h>
using namespace std;
class Simple_Calculator{
    int operand1,operand2;
    public:
        void set_op_values(int operand1,int operand2){
            this->operand1=operand1;
            this->operand2=operand2;
        }
        void display(){
            cout<<operand1<<" + "<<operand2<<" = "<<operand1+operand2<<endl;
            cout<<operand1<<" - "<<operand2<<" = "<<operand1-operand2<<endl;
            cout<<operand1<<" * "<<operand2<<" = "<<operand1*operand2<<endl;
            cout<<operand1<<" / "<<operand2<<" = "<<float(operand1)/operand2<<endl;
        }
};
class Scientific_Calculator{
    int value1;
    public:
        void set_value1(int value1){
            this->value1=value1;
        }
        void display(){
            cout<<"sin("<<value1<<") = "<<sin(value1)<<endl;
            cout<<"cos("<<value1<<") = "<<cos(value1)<<endl;
            cout<<"tan("<<value1<<") = "<<tan(value1)<<endl;
            cout<<"log10("<<value1<<") = "<<log10(value1)<<endl;
        }
};
class HybridCalculator:public Simple_Calculator,public Scientific_Calculator{
    public:
        void display(){
            Simple_Calculator::display();
            Scientific_Calculator::display();
        }
};
int main(){
    HybridCalculator obj;
    obj.set_op_values(100,23);
    obj.set_value1(10);
    obj.display();
    return 0;
}