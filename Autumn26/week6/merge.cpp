#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cstdlib>


void union_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0;i<vin1.size();i++){
    vout.push_back(vin1[i]);
    }
    for (int i=0;i<vin2.size();i++){
        bool flag=true;
        for (int j=0;j<vout.size();j++){
            if (vin2[i]==vout[j]){
                flag=false;
            }
        }
        if (flag==true){
            vout.push_back(vin2[i]);
        }
        
        
    }

}
//basically this is adding vin 1 and check if vin2 have anyrepitition and if there are, we disgard it

void intersection_vector(const std::vector<std::string>& vin1, const std::vector<std::string>& vin2, std::vector<std::string>& vout){
    for (int i=0;i<vin1.size();i++){//iterate though vin1
        for (int j=0;j<vin2.size();j++){//for each element iterate vin2 to find similarity;
            if (vin2[j]==vin1[i]){//one element at a time, and if there are a element that is the same as one of the element in vin 1 we record it
                vout.push_back(vin1[i]);
                break;
            }
        }
        
        }
    }

int main(){
    std::vector<std::string> cin,cin2,vout;
    std::string output;
        while(output!="0"){
            cin.push_back(output);
            std::cout<<"Enter the value for the vector:";
            std::cin>>output;
        }
        output=" ";
        while(output!="0"){
            cin2.push_back(output);
            std::cout<<"Enter the value for the vector:";
            std::cin>>output;
        }
        //union_vector(cin,cin2,vout);
        intersection_vector(cin,cin2,vout);
        for (int i=0;i<vout.size();i++){
            std::cout<<vout[i]<<std::endl;
        }
        

}