#include <iostream>

int getcardnumber(const int num1);
int getOddNum(const std::string cardnumber);
int getEvenNum(const std::string cardnumber);

int main(){
    std::cout<<"Enter the cardnumber: "<<"\n";
    std::string cardnumber;
    std::cin>>cardnumber;
    int total=getOddNum(cardnumber) + getEvenNum(cardnumber);
    if(total%10==0){
        std::cout<<"The cardnumber is valid."<<'\n';
    }
    else{
        std::cout<<"The cardnumber is invalid !"<<"\n";
    }

    return 0;
}

int getcardnumber(const int num1){
    return (num1%10)+(num1/10%10);
}
int getOddNum(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-1;i>=0;i-=2){
        sum+=cardnumber[i]-'0';
    }
    return sum;
}
int getEvenNum(const std::string cardnumber){
    int sum=0;
    for(int i=cardnumber.size()-2;i>=0;i-=2){
        sum+=getcardnumber((cardnumber[i]-'0')*2);
    }
    return sum;
}
