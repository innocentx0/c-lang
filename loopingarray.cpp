#include <iostream>

int main(){

    char array1[] = {'a','b','c'};
    //We could to for i in (number that we declare that is equal to all the object in the array)
    //Instead, we can use size of to get the exact number of the object in the array
    int array_size{};
    array_size = sizeof(array1)/sizeof(array1[0]);
    std::cout << "Size: " << array_size << "\n";

    for (int i = 0; i < array_size; i++){
        std::cout << array1[i];
    }

    return 0;
}
