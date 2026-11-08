#include<iostream>
#include<fstream>
#include<vector>
#include<string>
#include<cstdlib>




int main(){
    int num;
    std::string word,tmp;
    std::cout<<"enter the number of word";
    std::cin>>num;
    std::ofstream outf;
    outf.open("output.txt");
    for (int i=0;i<num;i++){
        std::ifstream inf;
        int count=0;
        std::cout<<"enter the word you want to find";
        std::cin>>word;
        inf.open("text.txt");
        if (!inf.is_open()){
            std::cout<<"output error";
            return EXIT_FAILURE;
        }
        else{
            while(inf>>tmp){
                if (tmp==word){
                    count++;
                }
            }
        }
        outf<<word<<count<<std::endl;
        inf.close();

    }
    outf.close();

}