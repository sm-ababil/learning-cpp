#include <iostream>

int main(){
    std::cout<<"********* START ********"<<"\n";
    std::string questions[] = {"1. Which is the capital of New Zealand ?", "2. Which is the largest island in the world ?", "Which is the capital of Palestine ?"};
    std::string options[][3]={{"A. Ontario","B. Wellington","C. Hemilton"},
                          {"A. Greenland", "B. Iceland", "C. Sumatra"},
                          {"A. Gaza city","B. Jerusalem","C. Damascus"}};
    std::string answers[]={"B","A","B"};
    int size = sizeof(questions)/sizeof(std::string);
    int score = 0;
    std::string ans;
    for(int i=0;i<size;i++){
        std::cout<<questions[i]<<"\n\n";
        for(int j = 0;j<size;j++){
            std::cout<<options[i][j]<<"\n";
        }
        std::cout<<"\nGuess the answer:"<<" ";
        std::getline(std::cin, ans);
        if(ans == answers[i]){
            std::cout<<"\nCORRECT !"<<'\n';
            score+=10;
        }
        else{
            std::cout<<"\nWRONG !"<<"\n"<<"Correct Answer: "<<answers[i]<<"\n";
        }
        std::cout<<"Score: "<<score<<"\n\n\n\n";
    }
    std::cout<<"********* THE END ********"<<"\n";
    std::cout<<"********* Total Score: "<<score<<"********"<<"\n";

    return 0;
}