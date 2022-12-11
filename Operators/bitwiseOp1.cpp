/*Program to perform bitwise operations:
There are 6 types:
Bitwise AND --> &
Bitwise OR  --> |
Bitwise XOR --> ^
Right shift --> >>
Left shift  --> <<
One's Complement --> ~  */
#include<iostream>
using namespace std;

int main(){
    int m=10,n=12;
    cout<<"10 & 12 --> "<<(m&n)<<endl;
    cout<<"10 | 12 --> "<<(m|n)<<endl;
    cout<<"10 ^ 12 --> "<<(m^n)<<endl;
    cout<<"10>>1--> "<<(m>>1)<<endl;
    cout<<"12<<2 --> "<<(n<<2)<<endl;
    cout<<"~10 --> "<<(~m)<<endl;
    return 0;
}