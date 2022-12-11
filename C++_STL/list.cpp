//A list basically uses a doubly linked list internally
//Almost list and vectors are similar but diffence is in their
//implementation and time complexity
//Here you cannot access the elements like list[1] or list.at(1)
//Because the elements are not arranged contiguosly but they are sequential

#include<iostream>
#include<list>

using namespace std;

void print_list(list<int> &li){
    list<int> :: iterator it=li.begin();
    while(it!=li.end()){
        cout<<*it<<endl;
        it++;
    }
}

int main(){
    //To create a list
    
    list<int> l;

    //To insert the element at the end of list
    
    l.push_back(10);
    l.push_back(19);
    
    //To insert the element at the beginning of the list
    //In vectors we don't have push_front()
    
    l.push_front(21);
    l.push_front(201);

    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }

    cout<<endl;
    
    //Size of the list
    //There is no concept of capacity in the lists
    
    cout<<"Size of list:"<<l.size()<<endl;

    //To check wheather the list is empty or not
    
    if(!l.empty())
        cout<<"List is not empty!"<<endl;

    //emplace_back is quicker than push_back
    l.emplace_back(399);
    
    l.emplace_front(420);

    //front and back gives the first and last element of
    //the list
    cout<<l.front()<<endl;
    cout<<l.back()<<endl;

    list<int> l2={100,200,300,400};
    
    cout<<"Before swapping:"<<endl;
    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    
    cout<<endl;
    
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" ";
    }
    
    //To swap two lists

    l2.swap(l);
    
    cout<<endl;
    
    cout<<"After swapping:"<<endl;

    for(auto it=l.begin();it!=l.end();it++){
        cout<<*it<<" ";
    }
    
    cout<<endl;
    
    for(auto it=l2.begin();it!=l2.end();it++){
        cout<<*it<<" ";
    }
    
    list<int>::iterator it=l2.begin();

    //advance is used to move the position of the iterator
    
    advance(it,2);
    
    l2.insert(it,199);
    
    cout<<endl;
    
    for(auto i=l2.begin();i!=l2.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl<<"-----------------"<<endl;    
    
    list<int> li;
    
    li.push_back(100);
    li.push_back(120);
    li.push_back(130);
    li.push_back(150);
    
    cout<<"Orginal list : "<<endl;
    print_list(li);
    list<int> &li1=li;
    cout<<"Copied list : "<<endl;
    print_list(li1);
    
    return 0;
}