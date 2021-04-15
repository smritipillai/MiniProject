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

FILE *f = NULL;
char songName[6] = "Stranger";
char Fname[4] = "Sam";
char Lname[6] = "Smith";
char G[1] = "M";
char Genre[1] = "H";
int stream = 0;
fseek(f,0,SEEK_END);
fwrite(songName,1,sizeof(songName),f);
fwrite(Fname,1,sizeof(Fname),f);
fwrite(Lname,1,sizeof(Lname),f);
fwrite(G,1,sizeof(G),f);
fwrite(Genre,1,sizeof(Genre),f);
fwrite(stream,1,sizeof(stream),f);

void test_fileOpen(void) {
    TEST_ASSERT_EQUAL(0, openFile("playlist.txt", "rb+", &f))
}

void test_addSong(void){
    TEST_ASSERT_EQUAL(0, check(songName, "Stranger"));
    TEST_ASSERT_EQUAL(0, check(Fname, "Sam"));
    TEST_ASSERT_EQUAL(0, check(Lname, "Smith"));
    TEST_ASSERT_EQUAL(0, check(G, "M"));
    TEST_ASSERT_EQUAL(0, check(Genre, "H"));
    TEST_ASSERT_EQUAL(0, check(stream, 0));
}

void test_songsByGenre(void){
    TEST_ASSERT_EQUAL(0, check(genre, "M"));
}

void test_songsByArtist(void){
    TEST_ASSERT_EQUAL(0, check(Fname, "Sam"));
    TEST_ASSERT_EQUAL(0, check(Lname, "Smith"));
}

int main(void)
{
    /* Initiate the Unity Test Framework */
    UNITY_BEGIN();

    /* Run Test functions */
    RUN_TEST(test_fileOpen);
    RUN_TEST(test_addSong);
    RUN_TEST(test_songsByGenre);
    RUN_TEST(test_songsByArtist);
    
    /* Close the Unity Test Framework */
    return UNITY_END();
}