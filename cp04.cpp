#include <vector>
#include <iostream>

int main(){
    const int SIZE=9;
    std::vector<std::vector<char>> m(SIZE,std::vector<char>(SIZE,'.'));
    for (int i=0;i<SIZE;++i){
        for (int j=0;j<SIZE;++j){
            std::cout<<m[i][j];
        }
        std::cout<<"\n";
    }
}