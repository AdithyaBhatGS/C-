#include<iostream>
using namespace std;

int main(){
    int phy,chem,bio,math,comp;
    cout<<"Enter the marks in phy:";
    cin>>phy;
    cout<<"Enter the marks in chem:";
    cin>>chem;
    cout<<"Enter the marks in bio:";
    cin>>bio;
    cout<<"Enter the marks in math:";
    cin>>math;
    cout<<"Enter the marks in comp:";
    cin>>comp;
    int percentage=(phy+chem+bio+math+comp)/5;
    switch(percentage>=90){
        case 0:
            switch(percentage>=80 && percentage<90){
                case 0:
                    switch(percentage>=70 && percentage<80){
                        case 0:
                            switch(percentage>=60 && percentage<70){
                                case 0:
                                    switch(percentage>=40 && percentage<60){
                                        case 0:
                                            cout<<"Grade E";
                                            break;
                                        case 1:
                                            cout<<"Grade D";
                                            break;
                                    }
                                break;
                                case 1:
                                    cout<<"Grade C";
                                    break;
                            }
                        break;
                        case 1:
                            cout<<"Grade B";
                            break;
                    }
                break;
                case 1:
                cout<<"Grade A";
                break;
            }
        break;
        case 1:
                cout<<"Grade S";
                break;
    }
    return 0;
}