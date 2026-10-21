# include <iostream>

    
int main(){
    std::cout <<"Year:"<<std::endl;
    int num;
    std::cin >> num;
    if (num%4==0){
        std::cout<<"This is a leap year \n";
        if(num%100==0){
            std::cout<<"This year is divisible by 100";
        }

    }
    else{
        std::cout<<"Not a leap year";
    }
}
