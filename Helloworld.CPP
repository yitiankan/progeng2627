#include <iostream>

int main(){
    //standard character output
    std::cout << "I like donut\n";
    /* you can use both \n and <<std::endl; the prior is faster and the later
     is for debugging as it pushes the output immediately after the line finishes
    */
    std::cout << "It's really good \n";
    
    //variable and numbers
    int x;//declaration
    x=5; //assignign value

    int x=5;
    std::cout << x;//output x
    
    //outputting string
    std::string name="Victor"

    //constant is something that we dont wannt others to change and we change the name in to capital letters.
    const double PI = 3.1315926;

    //to output namespace that is not local you can use
    std::cout << first::x
    //or you can use 
    using namespace first; 
    return 0;
}
//name space is used when the same name is used, if an output function is palced on the variable the local one is prioritised

namespace first{
    int x=1;
}
//to output something that is not local you can use


//type def to simplify a datatype

typedef std::string str;