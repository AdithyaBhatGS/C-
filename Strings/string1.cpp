/*Program to print the highest frequency character along with its frequency*/
#include<iostream>
#include<vector>
#include<climits>
using namespace std;
int max_count(char main_string[],vector<char> &occurence,int n){
    char ele;
    int count=0,max_count=INT_MIN;
    for (int i = 0; i < n; i++) {
        count=0;
        if(main_string[i]!='\0'){
            ele=main_string[i];
            for (int j = 0; j < n; j++) {
                if(ele==main_string[j]){
                    count+=1;
                    main_string[j]='\0';
                }
            }
            if(count>=max_count){
                if(count==max_count){
                    occurence.push_back(ele);
                }
                else{
                    occurence.clear();
                    occurence.push_back(ele);
                }
                max_count=count;
            }
        }
    }
    return max_count;
}
int length_finder(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
void maximum_frequency_finder(vector<char> &occurence,int m){
    int i=0;
    while(i<occurence.size()){
            cout<<occurence[i]<<"---->"<<m<<endl;
        i+=1;
    }
}
int main(){
    char main_string[100];
    vector<char> occurence;
    scanf("%[^\n]",main_string);
    int n=length_finder(main_string);
    int m=max_count(main_string,occurence,n);
    maximum_frequency_finder(occurence,m);
    return 0;
}