#include <iostream>
#include <cstdlib>
#include <fstream>
#include <vector>
#include <string>
int main(){
    std::ifstream file;
    file.open("input.txt");
    if(!file.is_open()){
        std::cout<<"file error";
        return EXIT_FAILURE;
    }
    else{
        std::vector<std::string> v;
        std::string tmp;
        while (file>>tmp){
            v.push_back(tmp);
        }
        for (int i=v.size()-1;i>=0;i--){
            std::cout<<v[i];
        }
    }
}
