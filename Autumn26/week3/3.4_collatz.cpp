#include <iostream>

int main(){
int a,b;
b=0;
std::cin>>a;
while (a!=1){
    if (a%2==0){
        a=a/2;
        std::cout<<a<<"\n";
        b++;
    }
    else{
        a=3*a+1;
        std::cout<<a<<"\n";
        b++;
    }
}
std::cout<<b;
}

