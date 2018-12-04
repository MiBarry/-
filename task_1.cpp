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
    int a = -100;
    int b = 100;
    for (int k = 0; k < n; k++) {
        array[k] = rand() % (b - a + 1) + a;
    }

    for (int k = 0; k < n; k++) {
        std::cout << array[k] << " ";
    }
    int max = -101;
    int min = 101;
    int index_min;
    int index_max;
    for (int i = 0; i<n; i++){
        if(array[i] < min){
            min = array[i];
            index_min = i;
        }
        if(array[i] > max){
            max = array[i];
            index_max = i;
        }
    }
    std::cout << "\n" << min << " " << index_min;
    std::cout << "\n" << max << " " << index_max;
    return 0;
}
