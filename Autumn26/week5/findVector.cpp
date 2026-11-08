#include <vector>
#include <iostream>

int searchvector(const std::vector<double>& v,double f){
    for (int i=0;i<v.size();i++){
        if (v[i]==f){
            return i+1;
        }
    }
}

int main(){
    std::vector<double> v={1,2,2,23,5,6,7,3,3};
    std::cout<<searchvector(v,23);
}