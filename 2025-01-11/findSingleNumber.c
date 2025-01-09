#include <stdio.h>

int findSingleNumber(int nums[], int size) {
    int result = 0;
    for (int i = 0; i < size; i++) {
        result ^= nums[i];  // XOR all numbers together
    }
    return result;
}

int main() {
    int nums[] = {4, 1, 2, 1, 2};
    int size = sizeof(nums) / sizeof(nums[0]);
    printf("The single number is: %d\n", findSingleNumber(nums, size));
    return 0;
}
