/*LCM of 2 numbers

First findout the largest among 2
Next Check wheather smallest num divide the largest num
If not the largest num should be multiplied with 2,3,4,5...

Ex:

44,28

Step 1:44%28=16

Step 2:44*2=88

Step 3:88%28=4

Step 4:44*3=132

Step 5:132%28=10
...
Finally 44*7=308

308%28==0

(28*11=308)

*/

#include<iostream>

using namespace std;
int main(){
    int num1,num2,large_num,small_num,largest,i=1,lcm;
    
    cin>>num1>>num2;
    
    if(num1>num2){
        large_num=num1;
        small_num=num2;
    }
    else{
        large_num=num2;
        small_num=num1;
    }
    largest=large_num;
    while(true){
        if(largest%small_num==0){
            lcm=largest;
            break;
        }
        else{
            i+=1;
            largest=large_num*i;
        }
    }    
    
    cout<<"LCM of "<<num1<<" and "<<num2<<" will be "<<lcm<<endl;
    
    return 0;
}