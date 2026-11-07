#include <iostream>
#include <fstream>
#include <cstdlib>

int main(){
    std::ifstream infile;
    infile.open("inputt.txt");
    if (infile.is_open()){
    int tmp;
    while (infile>>tmp){
    std::cout<<tmp<<std::endl;
    }
}
    else{
        std::cout<<"file error";
        return EXIT_FAILURE;
}
}
