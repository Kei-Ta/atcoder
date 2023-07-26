#include <iostream>
#include<string>
using namespace std;

int main()
{
    int num;
    int num2;

    int seki;
    int amari;
    

    std::cin >> num;
    std::cin >> num2;

    seki = num * num2;

    amari = seki % 2;

    if (amari == 1){
        std::cout << "Odd" << std::endl;
    }else{
        std::cout << "Even" << std::endl;
    }
}