#include <iostream>
#include <cmath>

int main(){
    int base,num,x,total;
    total=0;
    std::cin>>base>>num;
    for (x=1;x<=num;x++){
        total=total+pow(base,x);
    }
    std::cout << total << std::endl;
    return 0;
}