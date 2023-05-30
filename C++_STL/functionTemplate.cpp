// objects->class

// class->templates

// templates are a way through which one can generalize a function or a class

// when we need to use function overloading(concept of creating muliple functions with same name but different type of parameters or different number of parameters) just for different type of parameters and both function perform same task,then we can generalize it through templates.

// 1)Function Templates
// 2)Class Templates


// ex:

#include<iostream>

using namespace std;
// without templates

/*int max_of_2(int a,int b){
    if(a>b)
        return a;
    return b;
}

float max_of_2(float a,float b){
    if(a>b)
        return a;
    return b;
}

double max_of_2(double a,double b){
    if(a>b)
        return a;
    return b;
}*/

// T will be replaced by the type of value int,float,double,class,struct or any...
template<class T>
T max_of_2(T a,T b){
    if(a>b)
        return a;
    return b;
}

int main(){

    int res1;
    float res2;
    double res3;

    res1=max_of_2(2,3);
    res2=max_of_2(2.33f,23.8891f);
    res3=max_of_2(2.33,8.77);

    cout<<res1<<" "<<res2<<" "<<res3<<endl;
}