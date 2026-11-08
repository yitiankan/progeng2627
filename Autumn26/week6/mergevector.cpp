#include <iostream>
#include <fstream>
#include <vector>
#include <cstdlib>
void merge_vectors_int(const std::vector<int>& v1, const std::vector<int>& v2, std::vector<int>& merged){
    int stp1=0,stp2=0;
    while (stp1!=(v1.size()-1) || stp2!=(v2.size()-1)){
    if (v1[stp1]<v2[stp2]){
        merged.push_back(v1[stp1]);
        stp1++;
    }
    else{
        merged.push_back(v2[stp2]);
        stp2++;
    }
    }
    while (stp1<=(v1.size()-1)){
        merged.push_back(v1[stp1]);
        stp1++;
    }
    while (stp2<=(v2.size()-1)){
        merged.push_back(v2[stp2]);
        stp2++;
    }

}

int main(){

    std::vector<int> v1;
    std::vector<int> v2;
    std::vector<int> out;

    std::vector<int> expected_output;

    v1 = {1, 3, 5, 6};
    v2 = {4, 6, 10};
    expected_output = {1, 3, 4, 5, 6, 6, 10};

    merge_vectors_int(v1, v2, out);

    if(out == expected_output){ // we can compare the content of vectors (at least in some cases)
        std::cout << "passed" << std::endl;
    }
    else{
        std::cout << "not passed" << std::endl;
    }
}