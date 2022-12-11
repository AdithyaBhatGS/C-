#include<iostream>
using namespace std;

int main(){
    //cin vs getline
    //See whenever we need to read a space seperated string always use getline instead of cin
    /*Ex: Input=Hello World
            cin>>s;
            cout<<s;
        Output:Hello
        Why?
        Because it will read the value till space and simply stop there*/
    
    //Declaring a string:
    string s;

    //Reading value into string:
    getline(cin,s);

    //Printing
    cout<<s<<endl;

    //Finding the size/length of the string
    cout<<"Size of the string:"<<s.size()<<endl;

    //Inserting a character into the end of the string
    s.push_back('a');
    cout<<"After pushback ! "<<s<<endl;

    //Removing a character from the end of the string
    s.pop_back();
    cout<<"After popback ! "<<s<<endl;

    //Concatenation
    string str1,str2;
    str1="James";
    str2="Robert";

    cout<<str1+" "+str2<<endl;
    cout<<"Before swapping : "<<endl;
    cout<<str1<<" "<<str2<<endl;
    cout<<"After swapping : "<<endl;
    swap(str1,str2);
    cout<<str1<<" "<<str2<<endl;

    /*Note:
    When you want to read string after reading an int or bool or float or double always use cin.ignore() so that current line will be ignored
    
    It will take input from the next line*/

    string s4="Hello";

    string::iterator it=s4.begin();
    //begin()->returns an iterator pointing to the beginning of a string
    cout<<*it<<endl;

    string::iterator it1=s4.end();
    //end()->returns an iterator pointing to the end of a string
    cout<<*(it1-1)<<endl;

    return 0;
}