#include <iostream>  
#include <vector>  
#include <algorithm> // ����sort����  

int main() {
    // ����һ��δ������������飨ʹ��std::vector��  
    std::vector<int> numbers = { 5, 2, 9, 1, 5, 6, 3, 4, 8, 7 };

    // ʹ��std::sort�����������������  
    // ע�⣺sort����Ĭ�Ͻ�����������  
    std::sort(numbers.begin(), numbers.end());

    // ��ӡ����������  
    std::cout << "Sorted array: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}