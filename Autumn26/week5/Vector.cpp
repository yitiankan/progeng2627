#include <iostream>
#include <vector>

int main(){
    int i,n,s,count=0;
    std::vector<int> v;
    std::cout<< "Enther a number:";
    std::cin>>n;
    for (i=0;i<n;i++){
        std::cout<< "Enther a number:"<<std::endl;
        std::cin>>s;
        v.push_back(s);
    }
    std::cout<<"please enter s";
    std::cin>>s;
    for (i=0;i<n;i++){
        if (v[i]==s){
            count++;
        }
    }
    std::cout<<"the number of "<<s<<" is "<<count<<std::endl;
}