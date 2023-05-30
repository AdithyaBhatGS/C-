// namespaces: namespace represents a space within which one can declare/define variables,classes,functions.

// why we need namespaces?

// let's say we have 2 libraries named libA and libB ,both of them have same function xyz()

// Now when you want to use function xyz() how can compiler determine the function

// libA->xyz() or libB->xyz()

// So in order to differetiate same name given to different identifiers in different libraries such as classes,functions,methods,variables we need namespace

// In cpp we have C++ std namespace where all classes,functions,methods,var are declared.

#include<iostream>
#include<math.h>
using namespace std;

// creating two namespaces A,B

namespace A{
    // defnition of function xyz() in A
    int xyz(int x){
        return pow(x,1);
    }
}

namespace B{
    // defnition of function xyz() in B
    double xyz(int x){
        return pow(x,2);
    }
}

int main(){
    // variables a,b hold values returned by functions A::xyz() B::xyz()
    double a,b;

    // Calling xyz() of namespace A

    // The below line indicates one is calling xyz() present in area 'A'
    a=A::xyz(10);

    // Calling xyz() of namespace B

    // The below line indicates one is calling xyz() present in area 'B'
    b=B::xyz(10);
    
    // printing values to console
    cout<<a<<" "<<b<<endl;
    
    return 0;
}