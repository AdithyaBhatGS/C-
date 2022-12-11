/*Program to print the frequency of each character along with its frequency*/
#include<iostream>
#include<vector>
using namespace std;
void count_each_character(char main_string[],char optimized_string[],vector<int> &occurence,int n){
    char ele;
    int count=0,k=0;
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
            occurence.push_back(count);
            optimized_string[k]=ele;
            k++;
        }
    }
    optimized_string[k]='\0';
}
int length_finder(char s[]){
    int i=0;
    while(s[i]!='\0'){
        i++;
    }
    return i;
}
void frequency_finder(char optimized_string[],vector<int> &occurence){
    int i=0,counter=0;
    while( optimized_string[i]!='\0' && i<occurence.size()){
        printf("%c---->%d\n",optimized_string[i],occurence[i]);
        i+=1;
    }
}
int main(){
    char main_string[100],optimized_string[100];
    vector<int> occurence;
    scanf("%[^\n]",main_string);
    int n=length_finder(main_string);
    count_each_character(main_string,optimized_string,occurence,n);
    frequency_finder(optimized_string,occurence);
    return 0;
}