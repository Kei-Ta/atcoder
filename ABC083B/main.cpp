#include <iostream>
using namespace std;

int main()
{
    int n;
    int a;
    int b;
    int sum = 0;
    int result = 0;

    std::cin >> n;
    std::cin >> a;
    std::cin >> b;

    for (int i = 1;i <= n; i++){
        // 数値の各桁を取り出して合計する
        int temp = i;
        while (temp != 0) {
            int digit = temp % 10; // 最下位桁を取得
            sum += digit;
            temp /= 10; // 最下位桁を削除
        }
        if (sum >= a && sum <= b){
            result += i;
        }
        sum = 0;
    }
    std::cout << result << std::endl;
    return 0;
}
