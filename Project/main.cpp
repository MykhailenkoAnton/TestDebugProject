#include <AnySort.h>
#include <iostream>

int main()
{
    int arr[6] = {3, 5, 2, 31, 2, 1};
    CustomTest::QuickSort(arr, 0, 5);

    for (size_t i = 0; i < 6; i++)
    {
        std::cout << arr[i] << std::endl;
    }
    
    return 0;
}