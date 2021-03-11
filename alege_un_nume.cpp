#include <iostream>
#include <stdlib.h>
using namespace std;


int main(){
    char letters[26] = { 'a', 'b', 'c', 'd', 'e', 'f', 'g', 
                          'h', 'i', 'j', 'k', 'l', 'm', 'n',  
                          'o', 'p', 'q', 'r', 's', 't', 'u', 
                          'v', 'w', 'x', 'y', 'z' }; 
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