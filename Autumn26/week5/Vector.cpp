#include <iostream>
#include <vector>

int main(){
    int i,n,s,count=0;
    std::vector<int> v,d;
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
            d.push_back(i);


        }
    }
    std::cout<<"the number of "<<s<<" is "<<count<<std::endl;
    for (i=0;i<count;i++){
        std::cout<<"The index of the number is"<<d[i]<<std::endl;
    }
}