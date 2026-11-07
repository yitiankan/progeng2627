#include <iostream>
#include <vector>

// maybe not the most efficient way:
double sum_vector(std::vector<double> vin){

    double sum = 0;

    for(int i = 0; i < vin.size(); i++){
        sum = sum + vin[i];
    }

    return sum;

}

int main(){
    std::vector<double> v;
    double z;

    std::cout <<"Enter a num";
    std::cin >>z;
    while (z!=0){
        v.push_back(z);
        std::cout <<"Enter a num";
        std::cin >>z;
    }

    std::cout << "the sum is: " << sum_vector(v) << std::endl;

}