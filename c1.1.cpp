#include <iostream>

int hi(void){
    std::cout<<"HII";
    // "::" -> scope 
    return 0;
}
int main(){
    int i;
    std::cout << "Enter Number: ";
    std::cin >> i;
    // ">>" -> Extractor
    std::cout << "The number is:"<< i << std::endl;
    hi();
    return 0;
}

