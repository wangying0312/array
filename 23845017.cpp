#include <iostream>  
#include <vector>  
#include <algorithm>   

int main() {
   
    std::vector<int> unorderedArray = { 5, 3, 8, 4, 2, 9, 1, 7, 6, 0 };

 
    std::cout << "无序数组中的元素：" << std::endl;
    for (int i = 0; i < unorderedArray.size(); ++i) {   
        std::cout << unorderedArray[i] << " ";
    }
    std::cout << std::endl;

      
    std::sort(unorderedArray.begin(), unorderedArray.end());

    
    std::cout << "排序后的数组中的元素：" << std::endl;
    for (int num : unorderedArray) { 
        std::cout << num << " ";
    }
    std::cout << std::endl;

    return 0;
}