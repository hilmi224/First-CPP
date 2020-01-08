#include <iostream>
 static int id; //Variabel Statis
extern int id; //Extern Keyword
 
int main(){
    std::cout<<id<<std::endl;
    return 0;
}
