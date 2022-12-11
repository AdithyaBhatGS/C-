/*A priority queue stores the elements in priority

max_heap->highest value=first priority
min_heap->lowest value=first priority

It is a container adapter that can be implemented using vector,deque

Default implementation->vector
*/


#include<iostream>
#include<queue>

using namespace std;

int main(){
    //A max heap will give higher priority for elements with highest value
    priority_queue<int> max_heap;
    //A min heap will give higher priority for elements with lowest value
    priority_queue<int,vector<int>,greater<int>> min_heap;
    int size;

    max_heap.push(1);
    max_heap.push(12);
    max_heap.push(80);
    max_heap.push(14);

    size=max_heap.size();
    
    cout<<"Max Heap : "<<endl;
    for(int i=0;i<size;i++){
        cout<<max_heap.top()<<endl;
        max_heap.pop();
    }

    min_heap.push(80);
    min_heap.push(12);
    min_heap.push(1);
    min_heap.push(14);
    cout<<"Min Heap : "<<endl;
    for(int i=0;i<size;i++){
        cout<<min_heap.top()<<endl;
        min_heap.pop();
    }

    return 0;
}