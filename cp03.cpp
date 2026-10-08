#include <iostream>
#include <vector>
int main() {
    std::vector<int> days={3,7,20,5,12,1};
    days.push_back(8);
    days.push_back(15);
    std::cout<< days.size()<<"\n";
    int total=0;
    int max=0;
    for (int i=0;i<days.size();i++){
        total=total+days[i];
        if (days[i]>max){
            max=days[i];
        }
    }
    std::cout<< total<<"\n";
    std::cout<<max;



}