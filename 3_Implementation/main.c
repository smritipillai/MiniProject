#include "inc/header.h"

void playlist_menu(int);

//Start of the application
int main(int argc, char *argv[]) {
    int n=0,r=0;
    while(n!=6) {
        playlist_menu(r);
    }
}

void playlist_menu(int r) {
    int n;
    printf("\n 1. Add song to the playlist\n");
    printf("\n 2. Display songs available on the playlist\n");
    printf("\n 3. List songs by a particular artist\n");
    printf("\n 4. List songs by a particular genre\n");
    printf("\n 5. List the count of songs available\n");
    printf("\n 6. Exit the system\n");
    printf("\n Enter one of the options from above: \n");
    if(r==0)
        scanf("%d", &n);
    switch(n) {
        case 1:  //Add new song
            addSong();
            break;

        case 2: //display songs
            displayPlaylist();
            break;

        case 3: //List songs by particular artist
            songsByArtist();
            break;

        case 4: //List songs by a particular genre
            songsByGenre();
            break;

        case 5: //count of songs available
            countOfTracks();
            break;

        case 6:
            printf("Thankyou. Existing the application\n");
            exit(0);
    }
}