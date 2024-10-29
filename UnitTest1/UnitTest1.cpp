#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_6.1_rec/6.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestCountAndSumElements)
        {

            const int size = 5;
            int arr[size] = { 20, 45, 33, 16, 89 };
            int expected_sum = 183;
            int expected_count = 4;
            int count = 0;
            int sum = 0;

            countAndSumElements(arr, size, count, sum);

            Assert::AreEqual(expected_sum, sum);
            Assert::AreEqual(expected_count, count);
        }

        TEST_METHOD(TestReplaceSpecificElements)
        {

            const int size = 5;
            int arr[size] = { 20, 45, 33, 16, 89 };
            int expected_result[size] = { 0, 45, 33, 0, 89 };

            replaceSpecificElements(arr, size);


            for (int i = 0; i < size; i++) {
                Assert::AreEqual(expected_result[i], arr[i]);
            }
        }

        TEST_METHOD(TestGenerateArray)
        {

            const int size = 10;
            const int min_value = 15;
            const int max_value = 94;
            int arr[size];

            generateArray(arr, size, min_value, max_value);

            for (int i = 0; i < size; i++) {
                Assert::IsTrue(arr[i] >= min_value && arr[i] <= max_value, L"Generated value out of range");
            }
        }
    };
}