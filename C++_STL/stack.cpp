/*Stacks:

*Stacks are container adapters,means they are implemented using other sequential containers like vectors,deque,list

*By default it is implemented using deque

*It is a data structure where insertion and deletion happens at only one end

*top->Indicates the element at top of the stack
*push->Inserting an element into top of the stack
*pop->Removing an element from the top of the stack

*It follows the principle of "LIFO"
*LIFO->Last in first out*/

#include <iostream>
#include <stack>
#include <string>
using namespace std;
//Function to read the values into the stack
void readData(stack<string> &s,int count){
    string temp;
    while(count!=0){
        getline(cin,temp);
        s.push(temp);//can also use emplace()
        count--;
    }
}
//Function to print the values of the stack
void printData(stack<string> &s){
    while(s.size()!=0){
        cout<<s.top()<<endl;
        s.pop();
    }
}
//Function to check wheather the stack is empty or not
string isEmpty(stack<string> &s){
    if(s.empty()){
        return "Empty stack";
    }
    else{
        return "Not an empty stack";
    }
}
int main()
{
    stack<string> stack_of_names;
    int count;
    cin>>count;
    cin.ignore();
    readData(stack_of_names,count);
    
    cout<<"Size before pop() : "<<endl;
    //Prints the current size of the stack
    cout<<stack_of_names.size()<<endl;
    
    printData(stack_of_names);
    
    cout<<"Size after pop() : "<<endl;
    cout<<stack_of_names.size()<<endl;
   
    cout<<isEmpty(stack_of_names)<<endl;
    
    return 0;
}
