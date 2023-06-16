// Illustration of class templates:
#include <iostream>
using namespace std;

// creating a template for a class ArrayList

// using this we can create a int,bool,float,str,double type array at runtime

// add and view elements at a specific index
template<class T>
class ArrayList{

    struct temp{
        // capacity represents size of the memory block to be created
        int capacity;
        // array is a pointer which holds memory block of size capacity
        T* array;
    };

    // creating a new ptr everytime object gets cretaed
    
    // assigning the pointer to null
    temp *ptr=NULL;

    public:

    // constructor that takes size as input and initializes the capacity and creates a memory block of size capacity and assigns its base address to array*
    ArrayList(int size){
        // assigning the ptr to new struct obj
        ptr=new temp;
        // now initialize the capacity with size
        ptr->capacity=size;
        // initialize the array
        ptr->array=new T[ptr->capacity];
    }

    // function to add a value to an index
    void addItem(T value,int index){
        if(index>=0 && index<=((ptr->capacity)-1))
        {
            ptr->array[index]=value;
        }
        else{
            cout<<"Invalid Index!.Try to insert in valid position!"<<endl;
        }
    }
    // function to view an element at a index
    T viewItem(int index){
        if(index>=0 && index<=(ptr->capacity)-1)
        {
            return ptr->array[index];
        }
        return to_string(-1);
    }
};
int main() {
    ArrayList <string>a1(10);
    a1.addItem("amy",0);
    a1.addItem("2.45",1);
    a1.addItem("3.99",2);
    a1.addItem("8.832",3);
    string idx=a1.viewItem(0);
    cout<<idx<<endl;
    return 0;
}