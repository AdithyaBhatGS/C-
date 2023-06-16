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
template<typename T1,typename T2,typename T3>
T3 max_of_2(T1 a,T2 b){
    if(a>b)
        return a;
    return b;
}

int main(){

    int res1;
    float res2;
    double res3;

    // explicitly specifying parameter type
    res1=max_of_2<int,int,int>(2,3);
    res2=max_of_2<float,double,double>(2.33f,23.8891f);

    cout<<res1<<" "<<res2<<" "<<endl;
}