#include <iostream>
#include <stdlib.h>
#include <string>
#include <cstdlib>
int main()
{
    srand(time(NULL));
    int n;
    std::cin >> n;
    int array[n];
    int a = 0;
    int b = 5;
    int yes = 0;
    int first_index = 0;
    int flag = 0;
    for (int k = 0; k < n; k++) {
        array[k] = rand() % (b - a + 1) + a;
    }
    for (int k = 0; k < n; k++) {
        std::cout << array[k] << " ";
    }
    for (int k = a; k < b+1; k++) {
        flag = 0;
        for (int j = 0; j < n; j++) {
            if ((array[j] == k) && (flag != 0)){
                if(flag == 1){
                    if (yes == 0) {
                        std::cout << "\n" << "YES";
                        yes = 1;
                    }
                    std::cout << "\n" << first_index;
                }
                std::cout << "\n"  << j;
                flag = flag + 1;
            }
            if((array[j] == k) && (flag == 0)){
                first_index = j;
                flag = 1;
            }
        }
    }
    if(yes == 0){
        std::cout << "\n" << "NO";
    }
    return 0;
}
