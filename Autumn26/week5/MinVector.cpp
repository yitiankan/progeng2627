#include <iostream>
#include <Vector>

int findmin(const std::vector<double>& v){
    double min=v[0];
    for (int i=1;i< v.size();i++){
        if (v[i]<min){
            min=v[i];
        }
    }
    return min;
    
}
int main(){
    std::vector<double> v={1,2,2,2,2,2,2,3,4,5,6,6};
    std::cout<<findmin(v);
}