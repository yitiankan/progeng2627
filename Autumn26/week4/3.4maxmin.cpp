#include <iostream>
#include <algorithm>
int anwser,max,min;
int main(){
    std::cout<<"give a num";
    std::cin>>anwser;
    max=anwser;
    min=anwser;
    while (anwser!=0){
        std::cout<<"give a num";
        std::cin>>anwser;
        if (anwser<min &&anwser!=0){
            min=anwser;
        }
        if (anwser>max){
            max=anwser;
        }
        std::cout<<max<<min;
    }
    return 0;
}