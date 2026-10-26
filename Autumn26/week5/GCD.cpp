#include <iostream>

int gcd(int a,int b) {
    int rem, quotient,total=1;
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
int main() {
    int a,total=0,count=0;
    std::cout << "Enter one number: ";
    std::cin>>a;
    while (a!=1){
        a=tointnum(a);
        total=total+a;
        count++;

    }
    std::cout << "The total is: " << total << std::endl;
    return 0;
}