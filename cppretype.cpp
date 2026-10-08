#include <iostream>

int main(){
    std::string name="Donut shop";
    int num=3;
    double price=2.5;
    double subtotal=num*price;
    const double TAXRATE=0.15;
    double total=subtotal*(1+TAXRATE);
    std::cout<<"Donut:"<<num;
    return 0;
}