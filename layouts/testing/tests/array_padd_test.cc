// https://stackoverflow.com/a/3599672
// The difference between two pointers means the number of elements of the type
// that would fit between the targets of the two pointers

// TODO: add iteration over array type instead of explicit list of types (if possible)

#include "gtest/gtest.h"

TEST(ArrayPadding, RawArray) {

    int numRows {3};
    int numCols {5};

    float f[numRows][numCols];
    double g[numRows][numCols];
    uint32_t h[numRows][numCols];
    int walk_actual, walk_expected;

    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            walk_expected = i * numCols + j; 
            walk_actual = &(f[i][j]) - &(f[0][0]);
            EXPECT_EQ(walk_expected, walk_actual);
            walk_actual = &(g[i][j]) - &(g[0][0]);
            EXPECT_EQ(walk_expected, walk_actual);
            walk_actual = &(h[i][j]) - &(h[0][0]);
            EXPECT_EQ(walk_expected, walk_actual);
        }
    }

}