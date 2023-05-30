/*
    For n=5

    **********
    ****  ****
    ***    ***
    **      **
    *        *
    *        *
    **      **
    ***    ***
    ****  ****
    **********
*/

#include<iostream>
using namespace std;

int main(){
    int n,low,high;
    cin>>n;
    //Initially for n=5, low=5,high=6 
    low=(n*2)/2;
    high=((n*2)/2)+1;
    for(int i=1;i<=n*2;i++){
        //In 1st line we have all stars
        if(i==1)
        {
            for(int j=1;j<=n*2;j++){
                cout<<'*';    
            }    
        }
        // If not 1st line then
        else{
            //Available -> 2....10 lines
            // Partition->2..5 lines
            if(i<=n){
                // Partition->2...4 lines
                // From 2 to 4 each line decrease your low and increase your high
                // whenever j comes in b/w low and high print ' ' else print '*'
                if(i!=n){
                    for(int j=1;j<=n*2;j++){
                        if(j>=low && j<=high){
                            cout<<' ';
                        }
                        else{
                            cout<<'*';
                        }
                    }
                    low-=1;
                    high+=1;
                }
                // 5th line
                // No modifications to low and high when i comes to 5th line when n=5
                else{
                    for(int j=1;j<=n*2;j++){
                        if(j>=low && j<=high){
                            cout<<' ';
                        }
                        else{
                            cout<<'*';
                        }
                    }
                }
            }
            // Partition->6....10
            else{
                // From 6th line to 10 th simply check when j is in range low..high print space
                // else print '*'
                // increment low and decrement high
                for(int j=1;j<=n*2;j++){
                    if(j>=low && j<=high){
                        cout<<' ';
                    }
                    else{
                        cout<<'*';
                    }
                }
                low+=1;
                high-=1;
            }
        }    
        cout<<endl; 
    }
    return 0;
}