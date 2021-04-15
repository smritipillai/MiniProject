#include "../inc/header.h"
#include "../unity/unity.h"
#include "../unity/unity_internals.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

void test_addSong() {
    TEST_ASSERT_EQUAL(1, addSong(1));
}

void test_countOfTracks() {
    TEST_ASSERT_EQUAL(1, countOfTracks(1));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_addSong);
    RUN_TEST(test_countOfTracks);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}