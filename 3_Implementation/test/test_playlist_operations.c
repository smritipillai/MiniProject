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

void test_menu(){
    TEST_ASSERT_EQUAL(0, playlist_menu(0));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_menu);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}