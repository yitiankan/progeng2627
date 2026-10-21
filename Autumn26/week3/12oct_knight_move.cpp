#include <iostream>
#include <cmath>

int main(){
    double xa,ya,xb,yb,distance;
    std::cout<<"enter coordinates:";
    std::cin>>xa>>ya>>xb>>yb;
    if (xb>8||xb<1||yb>8||yb<1){
        return 1;
    }
    distance=sqrt(pow((xa-xb),2)+pow((ya-yb),2));
    std::cout<<distance;
    if (distance==pow(5,1.0/2)){
        std::cout<<"valid move";
    }
    else{
        std::cout<<"invalid";
    }
    

}