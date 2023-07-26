#include <iostream>
#include<string>
using namespace std;

bool calc(int arr[],int num,int* count){
    for (int i = 0; i < num; i++){
        if (arr[i] % 2 == 1){
            return false;
        }else{
            arr[i] = arr[i]/2;
        }
    }
    (*count)++; 
    return true;
}

int main()
{
    int num;
    int count = 0;
    bool flag = true;

    std::cin >> num;

    int arr[num];
    int* ptr = arr;
    for (int i = 0; i < num; i++) {
        std::cin >> arr[i];
	}
    while (flag){
        flag = calc(arr,num,&count);
    }
    std::cout << count << std::endl;
}