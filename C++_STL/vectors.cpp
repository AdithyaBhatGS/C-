//Vectors are containers which are sized dynamically

/*size()=O(1)
push_back(),pop_back()-O(1)
*/
#include<iostream>
#include<vector>
#include<algorithm>

//algorithm should be included for sort

using namespace std;
int main(){
    //  Declaring a vector
    vector<int> v1;
    
    //Inserting elements into vector
    v1.push_back(10);
    v1.push_back(20);
    v1.push_back(30);
    //Size gives the number of elements present in vector    
    cout<<v1.size()<<endl;

    //Instead of v1[0] or v1[1] we can use v1.at(0) 
    
    cout<<v1.at(0)<<endl;
    cout<<v1.at(1)<<endl;
    
    //Ex:
    //Problem with v1[i] to insert new elements:
    
    v1[3]=100;
    v1[4]=1092;
    v1[5]=1023;
    
    v1.push_back(88);
    v1.push_back(19872);
    
    //When you print you will understand why you should'nt use 
    //v1[i] for insertion
    
    for(auto it=v1.begin();it!=v1.end();it++){
        cout<<*it<<" ";
    }
    
    cout<<endl<<"-----END OF V1-----"<<endl;
    
    //To create a vector of size 10 with all elements assigned to 5
    //But later you can change its size
    vector<int> v2(10,5);
    
    cout<<v2.size()<<endl;
    
    cout<<"----END OF V2----"<<endl;
    
    vector<int> v3;
    v3.push_back(10);
    v3.push_back(12);
    v3.push_back(19);
    v3.push_back(28);
    v3.push_back(37);
    
    //iterator is similiar to pointer which points to
    
    //specified loc like begin()->first memory block
    
    //end()->last+1 memory block
    
    vector<int>::iterator it;
    
    for(it=v3.begin();it!=v3.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    //auto is used to determine the type of a variable on the 
    //basis of value that it holds
    //Ex: auto i=2 ,it assigns integer type to i

    for(auto it2=v3.end()-1;it2>=v3.begin();it2--){
        cout<<*it2<<" ";
    }
    
    cout<<"----END OF V3----"<<endl;
    
    vector<int> v4;
    
    //Capacity basically refers to total elements that 
    //a vector can hold at the moment
    
    for(int i=1;i<30;i++){
        v4.push_back(i);
        cout<<"Size : "<<v4.size()<<endl;
        cout<<"Capacity : "<<v4.capacity()<<endl;
    }
    
    //empty() function will check wheather the vector is 
    //empty or not
    
    if(!v4.empty())
        cout<<"Not an empty vector!"<<endl;
    
    //clear will make the vector size 0 by deleting all the
    //elements
    
    v4.clear();
    
    if(v4.empty())
        cout<<"Empty vector"<<endl;
        
    v4.push_back(12);
    v4.push_back(19);
    v4.push_back(29);
    v4.push_back(101);
    
    v4.insert(v4.begin()+1,10);
    
    for(auto i=v4.begin();i!=v4.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    v4.insert(v4.end()-2,2,1900);
    for(auto i=v4.begin();i!=v4.end();i++){
        cout<<*i<<" ";
    }
    cout<<endl;
    
    //front() means the first element and back means 
    //last element 
    
    cout<<v4.front()<<endl;
    cout<<v4.back()<<endl;
    
    cout<<endl;
    
    for(auto it=v4.begin();it!=v4.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    
    //erase(iterator) will erase specified elements from the vector
    
    v4.erase(v4.begin()+1,v4.end()-2);
    
    for(auto it=v4.begin();it!=v4.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"----END OF V4----"<<endl;
    vector<int> v5;
    
    v5.push_back(100);
    v5.push_back(120);
    v5.push_back(133);
    v5.push_back(999);

    sort(v5.begin(),v5.end());
    
    for(auto it=v5.begin();it!=v5.end();it++){
        cout<<*it<<" ";
    }

    sort(v5.begin(),v5.end(),greater<int>());

    cout<<endl;
    
    for(auto it=v5.begin();it!=v5.end();it++){
        cout<<*it<<" ";
    }
    cout<<endl;
    cout<<"Use of swap function : "<<endl;
    vector<pair<int,int>> v6={{1,2},{3,4},{5,6}};
    vector<pair<int,int>> v7={{7,12},{22,19},{12,23}};

    //swaps the contents of two vectors
    v6.swap(v7);

    for(int i=0;i<v6.size();i++){
        cout<<v6[i].first<<" "<<v6[i].second<<endl;
    }
    cout<<"----------------"<<endl;
    //to remove an element from the end of the vector
    v6.pop_back();
    v6.pop_back();

    for(int i=0;i<v6.size();i++){
        cout<<v6[i].first<<" "<<v6[i].second<<endl;
    }

    cout<<endl;
    return 0;
}