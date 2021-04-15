#include "../inc/header.h"
#include "../unity/unity.h"

/* Required by the unity test framework */
void setUp()
{
}
/* Required by the unity test framework */
void tearDown()
{
}

char songName[100];
char f_artist[50];
char l_artist[50];
char gender[1];
char genre[1];
int platform;

FILE *f = NULL;

void test_fileOpen(void) {
    TEST_ASSERT_EQUAL(SUCCESS, openFile("playlist.txt"))
}

void check_file_display(void){
        
        TEST_ASSERT_EQUAL(SUCCESS, readFile(&r));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_fileOpen);
    RUN_TEST(test_create);
    RUN_TEST(test_insert);
    RUN_TEST(check_idx_file_insertion);
    RUN_TEST(check_file_save);
    RUN_TEST(check_fileDisplay);
    RUN_TEST(check_find_by_id);
    RUN_TEST(check_update_record);
    RUN_TEST(check_delete_node);
    RUN_TEST(check_delete_rec_file);
    RUN_TEST(check_delete_idx_file);
    RUN_TEST(check_uniq_id);
    RUN_TEST(check_data_loaded_write);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}