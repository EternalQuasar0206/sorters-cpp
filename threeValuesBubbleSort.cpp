#include <iostream>

int main() {
    std::cout << "BubbleSort in 3 user defined values C++ implementation \n\n";

    int* values = (int*) malloc(sizeof(int) * 10);
    
    std::cout << "Input 3 numbers: \n\n";
    std::cin >> values[0];
    std::cin >> values[1];
    std::cin >> values[2];
    
    int i;
    int j;
    int desc;
    
    for (i = 0; i < 3; ++i)
    {
        for (j = i + 1; j < 10; ++j)
        {
            if (values[i] < values[j])
            {
                desc = values[i];
                values[i] = values[j];
                values[j] = desc;
            }
        }
    }
    
    std::cout << values[0] << " ";
    std::cout << values[1] << " ";
    std::cout << values[2] << " ";
}