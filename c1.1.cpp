#include <iostream>

int hi(void){
    std::cout<<"HII";
    // "::" -> scope  resolution operator
    return 0;
}
int main(){
    int i;
    std::cout << "Enter Number: ";
    std::cin >> i;
    // "<<" -> Extractorṣ̥
    // ">>" -> Inserter
    std::cout << "The number is:"<< i << std::endl;
    hi();
    return 0;
}

