#include <iostream>
#include <ctime>

int main(){
    srand(time(NULL));
    int randnum = rand() % 3 + 1;
    
    switch(randnum){
        case 1: std::cout<<"Ready"<<"\n"; break;
        case 2: std::cout<<"Steady"<<"\n"; break;
        case 3: std::cout<<"GO"<<"\n"; break;
    }

    return 0;
    
}