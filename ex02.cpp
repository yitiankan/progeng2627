#include <iostream>

double cauculate(int donutcount, double price){
    return donutcount*price;
}
double discount(int donutcount, double subtotal){
    double total;
    if (donutcount >=12)
    {
        total=0.9*subtotal;
    }else if (donutcount<6)
    {
        total=subtotal;
    }else
    {
        total=subtotal*0.95;
    }
    return total;
}

int main(){
    for (int i=1;i<=12;i++){
        std::cout<<discount(i,cauculate(i,2.5))<<"\n";
    }
    return 0;
}