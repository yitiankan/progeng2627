#include <iostream>
#include <string>

int main(){

    double tempin,tempout;
    std::string unit,unitout;
    std::cin>>tempin>>unit;
    if (unit=="C"){
        tempout= tempin*9/5+32;
        unitout="F";
    }
    else if(unit=="F"){
        tempout=(tempin -32) * 5/9;
        unitout="C";
    }
    else{
        std::cout<<"value not valid\n";
    }

    std::cout<<tempout<<unitout;
//if you want to output both then you use  another<<

}