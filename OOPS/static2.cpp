/*Static variables in a Class
*When we declare a static variable inside a class we cannot initialize it 
there itself.
*So we need to initialize it outside.
*Also a static variable's multiple instances cannot be created.
*It belongs to class but not the object.
*So we don't need an object to get its value
*/
#include<iostream>
using namespace std;
class Car{
    public:
        //static int i=0;
        static int i;
};
int Car::i=5;
int main(){
    Car c1;
    cout<<Car::i;
    return 0;
}
