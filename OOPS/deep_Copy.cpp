/*Deep Copy
*We use deep copy when we need to use dynamic variables.
*Whenever we create a constructor then it will be treated as
Deep Copy.
*Here even if we use dynamic variables theere will be no change 
in the value of data members as shown below!
*/
#include<iostream>
using namespace std;
class Car{
    public:
        int *milege=NULL;
        Car(int milege_value){
            milege=new int;
            *milege=milege_value;
        }
        Car(Car& obj){
            milege=new int;
            *milege=*(obj.milege);
        }
        void setMilege(int milege_value){
            *milege=milege_value;
        }
        void display(){
            cout<<*milege<<endl;
        }
};
int main(){
    Car c1(20);
    Car c2=c1;
    c2.display();//c2 will not change when c1 changes
    c1.setMilege(30);
    c2.display();//c2 will not change when c1 changes
    return 0;
}