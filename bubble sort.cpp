// #include <iostream>

// void sort(int number[],int size);

// int main(){
//     int numbers[]={4,23,45,56,3,4323,12,445,56};
//     int size = sizeof(numbers)/sizeof(int);
//     sort(numbers, size);
//     for(int i = 0; i<size;i++){
//         std::cout<<numbers[i]<<" ";
//     }
//     return 0;
// }

// void sort(int number[],int size){
//     int temp;
//     for(int i=0;i<size-1;i++){
//         for(int j=0;j<size-i-1;j++){
//             if(number[j]<number[j+1]){
//                 temp=number[j];
//                 number[j]=number[j+1];
//                 number[j+1]=temp;
//             }
//         }
//     }
// }


#include <iostream>

void sort(int num[], int size);

int main(){
    int num[]={23,34,2,34,223,34,45,323,424,234,234,423,56};
    int size = sizeof(num)/sizeof(int);
    sort(num, size);
    for(int i = 0;i<size;i++){
        if(i==size-1){
            std::cout<<num[i]<<'\n';
        }
        else{
            std::cout<<num[i]<<"---> ";
        }
    }
    return 0;

}

void sort(int num[], int size){
    int temp;
    for(int i = 0;i<size-1;i++){
        for(int j=0;j<size-i-1;j++){
            if(num[j]>num[j+1]){
                temp = num[j];
                num[j]=num[j+1];
                num[j+1]=temp;
            }
        }
    }
}