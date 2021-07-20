#include "String.h"
#include <iostream>

using namespace std;

String::String()
{
    this->ch = new char;
    this->ch = "";
}

String::~String()
{
    delete[]ch;
}


String::String(char *ch)
{
    this->ch = new char;
    this->ch = ch;
}



char *String::toString()
{
    return ch;
}

int String::longueur()
{
    int L=0;
    while(ch[L] != '\0'){
        L++;
    }
    return L;
}

void String::add_char(int pos , char c)
{
    char *newCh;;
    newCh = new char;
    int L = longueur();

    if( pos < 0 || pos > L){
        cout<<"idex undefined";
    }else{

        int j=0;
        for(int i=0; i<=L ; i++){

            if(j==pos){
                newCh[j] = c;
                j++;
            }

            newCh[j] = ch[i];j++;
            newCh[j] = '\0';

        }
        ch = newCh;
    }


}

bool String::exist(char c){
    int L = longueur();
    bool test = false;
    for(int i=0;i<L;i++){
        if(ch[i]==c){test = true;}
    }
    return test;
}



void String::inverser(){
    char *newCh;;
    newCh = new char;
    int L = longueur();

    for(int i=0; i<L ; i++){
        newCh[i] = ch[L-1-i];
    }
    newCh[L]='\0';
    ch = newCh;
}


void String::remove_char(int pos){
    char *newCh;;
    newCh = new char;
    int L = longueur();

    if( pos < 0 || pos > L){
        cout<<"idex undefined";
    }else{

        int j=0;
        for(int i=0; i<L ; i++){
            newCh[j] = ch[i];
            if(i!=pos){j++;}
        }
        ch = newCh;
    }
}








