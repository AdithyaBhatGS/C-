/*Deque is similiar to vectors but the only difference is that 
you can insert and remove the elements from front(along with back)

Deque-->Double ended queue

In a normal queue insertion will happen from the rear end and deletion
will happen from the front end

In deque both insertion and deletion can happen on both sides*/

#include<iostream>
#include<deque> 
using namespace std;
void print_deque(deque<int> &d){
    deque<int> :: iterator it=d.begin();
    while(it!=d.end()){
        cout<<*it<<endl;
        it++;
    }
}
int main(){
    deque<int> d;
    //Inserting from the back
    d.emplace_back(10);
    
    //Inserting from the front
    d.emplace_front(12);
    
    //Inserting some more elements
    d.emplace_back(100);
    
    d.emplace_front(252);
    
    //252 12 10 100
    
    cout<<"Printing....."<<endl;
    print_deque(d);
    
    cout<<"Removed an element from the back!"<<endl;
    d.pop_back();
    print_deque(d);
    
    cout<<"Removed an element from the front!"<<endl;
    d.pop_front();
    print_deque(d);
    
    //Checking the size of the deque
    cout<<d.size()<<endl;
    
    //Checking the maximum size of the deque,means maximum elements
    cout<<d.max_size()<<endl;
    
    //To check wheather the size of the deque is 0 or not
    //empty returns 0 on false and 1 on true
    if(d.empty())
        cout<<"Empty deque!"<<endl;
    else 
        cout<<"Deque has some elements!"<<endl;
        
    //To delete some elements we use erase ,to make the size 0 we use clear
    //Here always elements are removed upto "Target-1"
    d.erase(d.begin(),d.begin()+1);

    
    print_deque(d);
            
    //Let's insert some more elements
    d.emplace_front(118);
    d.emplace_front(220);
    d.emplace_front(300);
    d.emplace_front(444);
    cout<<"---------------"<<endl;
    print_deque(d);
    cout<<"---------------"<<endl;
    cout<<d.at(3)<<endl;
    
    cout<<"First element : "<<d.front()<<endl;
    
    cout<<"Last element : "<<d.back()<<endl;
    
    //Reducing the size of the deque to 0
    d.clear();
    
    cout<<"Checking wheather the container is empty or not : "<<endl;
    if(d.empty())
        cout<<"Empty container!"<<endl;
        
    cout<<"After clear() : "<<endl;
    
    cout<<d.size()<<endl;
    
    cout<<d.max_size()<<endl;
    
    return 0;
}