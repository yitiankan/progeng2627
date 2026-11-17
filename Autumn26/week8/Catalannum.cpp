#include <iostream>
#include <vector>
int catalan(int x){
    if(x==0){
        return 1;
    }
    int total=0;
    for (int i=0;i<x;i++){
        total=catalan(i)*catalan(x-i-1)+total;
    }
    return total;
}
int main(){
    int n;
    std::vector<int> v;
    std::cout<<"enter a num";
    std::cin>>n;
    for (int i=0;i<=n;i++){
        v.push_back(catalan(i));
    }
    for (int val : v) {
    std::cout << val << " ";
}
}