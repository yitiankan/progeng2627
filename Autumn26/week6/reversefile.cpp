#include <iostream>
#include <string>
#include <cstdlib>
#include <fstream>
#include <vector>
int main(){
    std::ifstream infile;
    infile.open("input.txt");
    if (!infile.is_open()){
        std::cout<<"file error";
        return EXIT_FAILURE;
    }
    else{
        std::vector<std::string> v;
        std::string tmp;
        while (infile>>tmp){
            v.push_back(tmp);
        }
        infile.close();
        std::ofstream outf;
        outf.open("output.txt");
        for (int i=size(v)-1;i>=0;i--){
            if(!outf.is_open()){
                std::cout<<"file error";
                return EXIT_FAILURE;
            }
            else{
                outf<<v[i]<<std::endl;
            }

        }
    }
}
