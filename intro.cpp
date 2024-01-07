// #include <iostream>
// #include <cmath>
// // using namespace std;

// // namespace first {
// //     int x = 3;
// // }

// // namespace second {
// //     int x = 4;
// // 

// // typedef std::vector<std::pair<std::string, int>> pairlist_t;
// // typedef int number_t;
// // using name = int;

// int main(){
//     // string c = "ababil";
//     // cout<<c<<"\n";
//     // cout<<"Now"<<"\n";
//     // cout<<"pathetic";
//     // double PI = 3.1416;
//     // PI = 32923.2352;
//     // cout<< PI;
//     // using std::cout;
//     // cout<<second::x<<"\n";
//     // pairlist_t saw;
//     // saw.push_back(make_pair("rgdsfg", 234523))
//     // cout<<saw;
//     // char c = 100;  //implicit = automatic type conversation
//     // explicit type conversaion
//     // cout<<c<<"\n";
//     // cout<<(char) 102;
//     // string name;
//     // getline(cin, name);
//     // cout<<name;
//     // double a = 3.45;
//     // double b = 6.44;
//     // // int c = 7;
//     // // cout<<max(a,b)<<"\n";
//     // // cout<<min(a,c)<<"\n";
//     // // cout<< pow(2,3)<<"\n";
//     // // cout<< sqrt(8)<<"\n";
//     // // cout<<abs(-6)<<"\n";
//     // // cout<<round(3.5)<<"\n";
//     // // cout<<ceil(3.44)<<"\n";
//     // // cout<<floor(1.23)<<"\n";
//     // double d = sqrt(pow(a,2)+pow(b,2));
//     // cout<<d;
//     // return 0;

//     // char grade;
//     // cout<<"What is your garde? ";
//     // cin>>grade;
    
//     // // switch(grade){
//     // //     case 'A':
//     // //         cout<<"great"<<"\n";
//     // //         break;
//     // //     case 'B':
//     // //         cout<<"nice"<<"\n";
//     // //         break;
//     // //     default:
//     // //         cout<<"please";

//     // grade == 'A' ? cout<<"Yes" : cout<<"No";    //alternative of if else only
//     // return 0;

// //string methods

//     // std::string name;
//     // std::getline(std::cin, name);
//     // if (name.length()>12){
//     //     std::cout<<"the name is too long"<<std::endl;

//     // }
//     // std::cout<<name.empty();
//     // name.clear();
//     // std::cout<<name;
//     // name.append("@gmail.com");
//     // cout
//     // return 0;
//     // int i;
// // loops
//     // do{
//     //     std::cin>>i;
//     //     std::cout<<i<<"\n";
//     // } while(i>10);

//     // return 0;

//     for(int i = 0; i<=10; i+=2){
//         std::cout<<i<<"\n";
//     }

//     return 0;
    
// }


// #include <iostream>

// void happybar(std::string name);

// int main(){ 
//     std::string name;
//     std::cout<<"type the name: "<<'\n';
//     std::cin>>name;
//     happybar(name);
// }


// void happybar(std::string name){
//     std::cout<<"Happy Birthday !"<<name<<'\n';


// std::string concat(std::string string1, std::string string12);
// std::string concat(std::string string1);
// int concat(int num1, int num2);

// int mynum = 3;

// int main(){
    // std::string name1 = "Bro";
    // std::string name2 = "Code";
    // // std::cout<<concat(name1, name2)<<'\n';
    // std::cout<<concat(name1,name2)<<'\n';
    // std::cout<<concat(name2)<<"\n";
    // std::cout<<concat(2,4)<<'\n';
//     int mynum = 2;
//     std::cout<<mynum<<'\n';
//     std::cout<<::mynum;


//     return 0;
// }

// std::string concat(std::string string1, std::string string2){
//     return string1 + string2;
// }
// int concat(int num1, int num2){
//     return num1+num2;
// }
// std::string concat(std::string string1){
//     return string1;
// }


// #include <iostream>

// int main(){
//     std::string a = "abakajaskj";
//     std::cout<<a[0];

//     return 0;
// }

// #include <iostream>

// int main(){
//     std::string car[] = {"car", "mustang", "afzsas"};
//     car[0] = "camero";

//     std::cout<<car[0]<<"\n";
//     std::cout<<car;

//     return 0;
// }




// int main(){
//     std::string students[] = {"ababil","rafi,","rifat"};
//     for(int i = 0; i<students.size();i++){
//         std::cout<<students[i]<<"\n";
//     }
//     return 0;
// }

// int main(){
//     std::string nine[]={"bans","ghit","sdjsvb"};

//     for (int i=0; i<sizeof(nine)/sizeof(std::string);i++){
//         std::cout<<nine[i]<<"\n";
//     }
//     return 0;
// }



//for each loop

// #include <iostream>

// int index(double grades[], int size, double mynum);

// int main(){
//     double grades[]= {34.56,45.34,23.45,23.56,23.54,12.45,23.00};
//     int size = sizeof(grades)/sizeof(int);
//     double mynum;
//     int num;
//     std::cout<<"Enter your number: "<<'\n';
//     std::cin>>mynum; 
//     num = index(grades, size, mynum);
//     if (num==-1){
//         std::cout<<"Not Available";
//     }
//     else{
//         std::cout<<"The index is "<<num;
//     }
//     return 0;
// }

// double gettotal(double grades[], int size){
//     double total=0;
//     for (int i=0;i<size;i++){
//         total+=grades[i];
//     }
//     return total;

// int index(double grades[], int size, double mynum){
//     for (int i=0;i<size;i++){
//         if (grades[i]==mynum){
//             return i;
//         }
//     }
//     return -1;
// }

// #include <iostream>

// int main(){
//     const int size = 5;
//     std::string foods[size];
//     std::string temp;
//     for(int i=0;i<size;i++){
//         std::cout<<"Enter the food u like #"<<i+1<<": "<<'\n';
//         std::getline(std::cin, temp);
//         if (temp=="q"){
//             break;
//         }
//         else{
//             foods[i]=temp;
//         }
//     }

//     for (int i=0; !foods[i].empty();i++){
//         std::cout<<foods[i]<<'\n';
//     }

//     return 0;
// }





//2D ARRAY//

// #include <iostream>

// int main(){
//     std::string arr[][3]={{"232","1312dsssss","addasdas"},
//                            {"asfsdsd","asfsd","fsadfdd"},
//                            {"sasaca","aZXCXC","ascscsa"}};
//     int row = sizeof(arr)/sizeof(arr[0]);
//     int col = sizeof(arr[0])/sizeof(arr[0][0]);

//     for(int i=0;i<row;i++){
//         for(int j=0;j<col;j++){
//             std::cout<<arr[i][j]<<" ";
//         }
//         std::cout<<"\n";
//     }
//     return 0;
// }

// #include <iostream>

// int main(){
//     std::cout<<10%10;

//     return 0;
// }




// Pointer//

#include <iostream>

int main(){
    int name = 1025;
    // std::string arr[]={"fdsd","sdsd","sdsd"};
    // std::string *parr = &arr[1];
    // std::cout<<parr;
    std::cout<<(char)name<<'\n';

    return 0;
}