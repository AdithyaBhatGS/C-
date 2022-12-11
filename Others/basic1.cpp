/*Program take user input in the form of days
and convert it into years,weeks,days*/
#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int days,years,weeks;
    cout<<"Enter the days:";
    cin>>days;
    years=(days/365);
    weeks=((days-(365*years))/7);
    days=(days-365*years-7*weeks);
    cout<<"Years="<<years<<"\t Weeks="<<weeks<<"  Days="<<days<<endl;
    return 0;
}