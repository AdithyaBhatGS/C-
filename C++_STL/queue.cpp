/*Queues:


*Queues are container adapters,means they are implemented using other sequential containers like vectors,deque,list

*By default it is implemented using deque

*It is a data structure where insertion happens at rear end and deletion happens at front end

*front->Indicates the front end 
*back->Indicates the back end
*push->Inserting an element to the queue from the rear end
*pop->Removing an element from the front of the queue

*It follows the principle of "FIFO"
*FIFO->First in first out*/


#include<iostream>
#include<queue>
#include<string>

using namespace std;
void readNames(queue<string> &q,int count){
    string temp;
    while(count!=0){
        getline(cin,temp);
        q.push(temp);
        count-=1;
    }
}
void printNames(queue<string> &q,int count){
    while(q.size()!=0){
        cout<<q.front()<<endl;
        q.pop();
    }
}

int main(){
    queue<string> queue_of_strings;
    int count;
    cin>>count;
    cin.ignore();
    cout<<"Reading the names........"<<endl;
    readNames(queue_of_strings,count);
    cout<<"Printing the names........"<<endl;
    printNames(queue_of_strings,count);
}