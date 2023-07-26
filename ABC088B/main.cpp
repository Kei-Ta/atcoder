#include <iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int num;


    int a = 0;
    int b = 0;

    std::cin >> num;

    int arr[num];

    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
	}

    sort(arr,arr + num, greater<int>());
    for (int i = 0; i < num; i++) {
        if (i % 2 == 0){
            a += arr[i];
        }else{
            b += arr[i];
        }
	}
   std::cout << a - b << std::endl;
}