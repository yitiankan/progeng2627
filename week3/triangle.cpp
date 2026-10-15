#include <iostream>
#include<algorithm>
#include <cmath>
int main(){
    double a,b,c;
    std::cout<<"enter your three side";
    std::cin>>a>>b>>c;
    if (a==std::max({a,b,c})){
        if (b+c<=a){
            std::cout<<"Value invalid";
            return 1;
        }
    }

    else if(b==std::max({a,b,c})){
        if(a+c<=b){
            std::cout<<"Value invalid";
            return 1;
        }
    }
    else{
        if (a+b<=c){
            std::cout<<"Value invalid";
            return 1;
        }
    }
    if (a==b && a==c){
        std::cout<<"This is an equilateral\n";
    }
    else if(a==b||b==c||a==c){
        std::cout<<"This is an isoceles\n";
    }
    else{
        std::cout<<"This is scalene\n";
    }
    double perimetre=a+b+c;
    std::cout<<perimetre<<std::endl;
    double area=std::sqrt(perimetre/2*(perimetre/2-a)*(perimetre/2-b)*(perimetre/2-c));
    std::cout<<area<<std::endl;
}