#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    char letters[] = "abcdefghijklmnopqrstuvwxyz";
    int stop=0;
    while(stop<=10){
        
        int lungime=rand()%10+1;
        char nume[lungime];
        for(int i=0;i<lungime;i++){
            nume[i]=letters[rand()%26];
        }
        cout<<nume<<endl;
        stop++;
    }


}