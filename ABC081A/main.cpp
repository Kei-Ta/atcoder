#include <iostream>
#include<string>
using namespace std;

int main()
{
    string s;
    int count = 0;

    std::cin >> s;

    for (int i = 0; i < s.length(); i++) {
        if (s[i]=='1'){
            count++;
        }
	}
    std::cout << count << std::endl;
}