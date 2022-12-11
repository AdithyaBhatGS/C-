//Program to go to home using recursion

/*
1.Here we first print our current step and total steps
2.If we reach home we stop
3.Else continue to move forward
*/

#include<iostream>
using namespace std;
void pathToHome(int current,int totalSteps){
    //Print current step and final destination
    cout<<"Current:"<<current<<" "<<"Home:"<<totalSteps<<endl;

    //base case
    //If you reach home then stop moving
    if(current==totalSteps)
        return;
    
    pathToHome(++current,totalSteps);
}
int main(){
    int steps_away_from_home;
    cin>>steps_away_from_home;
    pathToHome(1,steps_away_from_home);
    return 0;
}