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
    int super_max = - 101;
    int index_super_max;
    int index_max;
    if(n == 1){
        index_super_max = 0;
        std::cout << "\n" << array[0] << " " << index_super_max;
        std::cout << "\n" << -1;
    }else{
        for (int i = 0; i<n; i++){
            if(array[i]>max){
                if(array[i]>super_max){
                    max = super_max;
                    super_max = array[i];
                    index_max = index_super_max;
                    index_super_max = i;
                }else{
                    max = array[i];
                    index_max = i;
                }
            }
        }
        std::cout << "\n" << super_max << " " << index_super_max;
        std::cout << "\n" << max << " " << index_max;


    }
    return 0;
}
