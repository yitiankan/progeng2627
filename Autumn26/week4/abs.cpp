#include <iostream>
#include<cmath>

double absolute(int m){
    if (m<0){
    return -m;
    }
    else{
    return m;
    }
}
 int main(){
    double m,result;
    std::cout<<"Give me a num";
    std::cin>>m;
    result=absolute(m);
    std::cout<<result<<m;
 }
 