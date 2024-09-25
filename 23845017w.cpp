#include <iostream>  
#include <vector>  
#include <algorithm> // 包含sort函数  

int main() {
    // 创建一个未排序的整数数组（使用std::vector）  
    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6, 3, 4, 8, 7 };

    // 使用std::sort函数对数组进行排序  
    // 注意：sort函数默认进行升序排序  
    std::sort(numbers.begin(), numbers.end());

    // 打印排序后的数组  
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}