#include <iostream>

int gcd(int a,int b) {
    int rem;
    while (b!=0)
    {
        rem = a % b;
        a = b;
        b = rem;
    }
    return a;

}

int coprime(int a, int b) {
    if (gcd(a,b)==1){
        return 1;
    }
    else{
        return 0;
    }
}
int tointnum(int a){
    int i,total=0;
    for (i=0;i<a;i++){
        total=total+coprime(a,i);
    }
    return total;
}
int depth(int a) {
    int total=0,count=0;
    while (a!=1){
        a=tointnum(a);
        total=total+a;
        count++;
    }
    return count;
}
int main(){
    int a,b,digit;
    double peak=0,max=0;
    std::cout << "Enter two numbers: ";
    std::cin >> a >> b;
    for (a=a+1;a<=b-1;a++){   
        peak=(depth(a) - depth(a - 1) + depth(a) - depth(a + 1))/2.0;
        if (peak>max){
            max=peak;
            digit=a;
        }
        peak=0;

    }
    if (max==0){
        std::cout << "No peak found in the given range." << std::endl;
        return -1;
    }
    std::cout << "The maximum peak is: " << max << std::endl;
    std::cout << "The digit is: " << digit << std::endl;
}