#include <algorithm>
#include <iostream>
#include <ranges>
#include <vector>
 
int main()
{
    std::vector<int> vec{3, 1, 4};
    if (std::ranges::find(vec, 4) != std::ranges::end(vec))
        std::cout << "found a 5 in vector vec!\n";
 
    int arr[]{5, 10, 15};
    if (std::ranges::find(arr, 5) != std::ranges::end(arr))
        std::cout << "found a 5 in array arr!\n";
}
