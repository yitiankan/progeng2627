#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

int isvalid(int xa,int ya,int xb,int yb){
    if (xb>8||xb<1||yb>8||yb<1){
        return 0;
    }
    int distancesquared;
    distancesquared=(xa-xb)*(xa-xb)+(ya-yb)*(ya-yb);
    if (distancesquared==5){
        return 1;
    }
    else{
        return 0;
    }
}

int main(){
    std::srand(std::time(NULL));
    int a,b;
    a=std::rand()%8+1;
    b=std::rand()%8+1;
    while((a==1||a==8)&&(b==1||b==8)){
        a=std::rand()%8+1;
        b=std::rand()%8+1;
    }
    std::cout<<"Start: ("<<a<<", "<<b<<")"<<std::endl;
    std::string path="("+std::to_string(a)+","+std::to_string(b)+")";
    int c,d;
    int moves=0;
    while(not((a==1||a==8)&&(b==1||b==8))){
        std::cout<<"enter your next move"<<std::endl;
        std::cin>>c>>d;
        if (isvalid(a,b,c,d)){
            a=c;
            b=d;
            moves++;
            path+=" -> ("+std::to_string(a)+","+std::to_string(b)+")";
            std::cout<<"Knight is now at ("<<a<<", "<<b<<")"<<std::endl;
        }
        else{
            std::cout<<"invalid move, try again"<<std::endl;
        }
    }
    std::cout<<"You have reached the corner in "<<moves<<" moves"<<std::endl;
    std::cout<<"Your path: "<<path<<std::endl;
}
