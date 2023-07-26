#include <iostream>
#include<string>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    int x;

    std::cin >> a;
    std::cin >> b;
    std::cin >> c;
    std::cin >> x;

    int count = 0;
    int z = 0;
    for (int i = 0; i <= a; i++){
        for (int j = 0; j <= b; j++){
            for (int k = 0; k <= c; k++){
                z = 500 * i + 100 * j + 50 * k;
                if (z == x){
                    count++;
                }
                z = 0;
            }
        }
    }
    std::cout << count << std::endl;
}