#include <gtest/gtest.h>

int equi(int inputArr[], int arrayLen)
{
    int i = 0;
    int sum_left, sum_right = 0;
    
    for (i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            sum_left += inputArr[j];
        }
        for (int j = (i + 1); j < n; j++) {
            sum_right += inputArr[j];
        }
        if (sum_left == sum_right)
            return i;
        sum_left = 0;
        sum_right = 0;
    }
    return 0;
}

TEST(EquiTest, EmptyArrayReturnsZero)
{
    const int arrayLen = 0;
    int inputArr[arrayLen] = {};
    int equiIndex = equi(inputArr, arrayLen);
    int expectedEquiIndex = -1;
    ASSERT_EQ(expectedEquiIndex, equiIndex);
}
