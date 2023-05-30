/* Static variables inside a function
1)Static variables are always declared in the "Data Segment" of
the segment of the memory layout.
2)Once they are created they are destroyed only at the end of the
execution
->So if we have used a normal variable here we would have got 0 ,5 times,but since this is a static variable we can see that values have
not changed */
#include<iostream>
using namespace std;
void fun(){
    static int i=0;
    ++i;
    cout<<i<<endl;
}
int main(){
    for(int i=0;i<5;i++)
        fun();
    return 0;
}