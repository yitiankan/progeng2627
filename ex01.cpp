#include <iostream>

int main() {
    std::string name="Donut Hut";
    int donuts=3;
    double price=2.5;
    double subtotal;
    subtotal=donuts*price;
    const double Taxrate=0.15;
    double tax=Taxrate*subtotal;
    double total;
    total= tax+subtotal;
    std::cout<<name<<"\n";
    std::cout<<"Donuts:"<<donuts<<"\n";
    std::cout<<"Price each:"<<price<<"\n";
    std::cout<<"Subtotal:"<<subtotal<<"\n";
    std::cout<<"Tax:"<<tax<<"\n";
    std::cout<<"Total:"<<total<<"\n";
}

