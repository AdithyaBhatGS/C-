/*Use of cin.ignore()*/
#include<iostream>
#include<string>
using namespace std;

int main(){
    int size;
    cin>>size;
    string temp;
    string arr[size];//Array of strings
    //Reading strings
    //cin.ignore()
    for(int i=0;i<size;i++){
        getline(cin,temp);
        arr[i]=temp;
    }
    //Printing the strings in arrays
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    //If you take size=4
    /*You can only read 3 values why?
    Because ,once you read 4 into size variable
    ,in the next line we are traversing through the loop so it will read the "\n" character after 4 ,hence one string value will be skipped

    Always use cin.ignore() and only then use getline()
    to avoid these issues
    */
    return 0;
}