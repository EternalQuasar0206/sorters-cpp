#include <iostream>
#include <vector>

typedef std::vector<int> int_list;

int_list sort(int_list v) {
    for (int i = 0; i < v.size(); i++) {
        if (v[i] > v[i + 1]) {
            int tempHost = v[i];
            v[i] = v[i + 1];
            v[i + 1] = tempHost;
        }
    }      

    return v; 
} 

int main() {
    std::cout << "Bubble sort C++ implementation \n\n";
    
    int_list values;
    values.push_back(20);
    values.push_back(-4);
    values.push_back(10);

    printf("%d %d %d", values[0], values[1], values[2]);

    std::cout << "\n";

    int_list sorted = sort(values);

    printf("%d %d %d", sorted[0], sorted[1], sorted[2]);

    std::cout << "\n\n";

    return 0;
}