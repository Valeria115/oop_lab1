#include <gtest/gtest.h>
#include "../include/num.h"


TEST(ScaryTest, Monday_12_ReturnsTrue) {
    ASSERT_TRUE(Scary("Понедельник", 12));
}

TEST(ScaryTest, Monday_Not12_ReturnsFalse) {
    ASSERT_FALSE(Scary("Понедельник", 11));
    ASSERT_FALSE(Scary("Понедельник", 13));
    ASSERT_FALSE(Scary("Понедельник", 0));
}


TEST(ScaryTest, Tuesday_GreaterThan95_ReturnsTrue) {
    ASSERT_TRUE(Scary("Вторник", 96));
    ASSERT_TRUE(Scary("Вторник", 100));
    ASSERT_TRUE(Scary("Вторник", 1000));
}

TEST(ScaryTest, Tuesday_LessOrEqual95_ReturnsFalse) {
    ASSERT_FALSE(Scary("Вторник", 95));
    ASSERT_FALSE(Scary("Вторник", 50));
    ASSERT_FALSE(Scary("Вторник", 0));
    ASSERT_FALSE(Scary("Вторник", -10));
}


TEST(ScaryTest, Wednesday_34_ReturnsTrue) {
    ASSERT_TRUE(Scary("Среда", 34));
}

TEST(ScaryTest, Wednesday_Not34_ReturnsFalse) {
    ASSERT_FALSE(Scary("Среда", 33));
    ASSERT_FALSE(Scary("Среда", 35));
    ASSERT_FALSE(Scary("Среда", 0));
}


TEST(ScaryTest, Thursday_0_ReturnsTrue) {
    ASSERT_TRUE(Scary("Четверг", 0));
}

TEST(ScaryTest, Thursday_Not0_ReturnsFalse) {
    ASSERT_FALSE(Scary("Четверг", 1));
    ASSERT_FALSE(Scary("Четверг", -1));
    ASSERT_FALSE(Scary("Четверг", 100));
}


TEST(ScaryTest, Friday_EvenNumbers_ReturnsTrue) {
    ASSERT_TRUE(Scary("Пятница", 2));
    ASSERT_TRUE(Scary("Пятница", 0));
    ASSERT_TRUE(Scary("Пятница", -4));
    ASSERT_TRUE(Scary("Пятница", 100));
}

TEST(ScaryTest, Friday_OddNumbers_ReturnsFalse) {
    ASSERT_FALSE(Scary("Пятница", 1));
    ASSERT_FALSE(Scary("Пятница", -3));
    ASSERT_FALSE(Scary("Пятница", 99));
}


TEST(ScaryTest, Saturday_56_ReturnsTrue) {
    ASSERT_TRUE(Scary("Суббота", 56));
}

TEST(ScaryTest, Saturday_Not56_ReturnsFalse) {
    ASSERT_FALSE(Scary("Суббота", 55));
    ASSERT_FALSE(Scary("Суббота", 57));
    ASSERT_FALSE(Scary("Суббота", 0));
}


TEST(ScaryTest, Sunday_666_ReturnsTrue) {
    ASSERT_TRUE(Scary("Воскресенье", 666));
}

TEST(ScaryTest, Sunday_Negative666_ReturnsTrue) {
    ASSERT_TRUE(Scary("Воскресенье", -666));
}

TEST(ScaryTest, Sunday_Not666_ReturnsFalse) {
    ASSERT_FALSE(Scary("Воскресенье", 665));
    ASSERT_FALSE(Scary("Воскресенье", 667));
    ASSERT_FALSE(Scary("Воскресенье", 0));
}


TEST(ScaryTest, InvalidDay_ReturnsFalse) {
    ASSERT_FALSE(Scary("InvalidDay", 12));
    ASSERT_FALSE(Scary("", 12));
    ASSERT_FALSE(Scary("понедельник", 12));
    ASSERT_FALSE(Scary("Monday", 12)); 
}

TEST(ScaryTest, BoundaryValues) {
    
    ASSERT_FALSE(Scary("Вторник", 95));
    ASSERT_TRUE(Scary("Вторник", 96));
    
    
    ASSERT_TRUE(Scary("Пятница", 0));
    ASSERT_FALSE(Scary("Пятница", 1));
    ASSERT_TRUE(Scary("Пятница", 2));
    
    
    ASSERT_TRUE(Scary("Воскресенье", 666));
    ASSERT_TRUE(Scary("Воскресенье", -666));
    ASSERT_FALSE(Scary("Воскресенье", 0));
}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}