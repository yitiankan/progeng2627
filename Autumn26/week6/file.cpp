#include <iostream>
#include <fstream>

int main(){
    std::ifstream infile;
    infile.open("input.txt");
    if (infile.is_open()){
    int tmp;
    while (infile>>tmp){
    std::cout<<tmp<<std::endl;
    }
}
}
