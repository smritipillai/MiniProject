#include "inc/header.h"

void playlist_menu();
//Start of the application
int main() {
    int n=0;
    while(n!=6) {
        playlist_menu();
    }
}

void playlist_menu() {
    int n;
    static int count = 0;
    printf("\n 1. Add song to the playlist\n");
    printf("\n 2. Display songs available on the playlist\n");
    printf("\n 3. List songs by a particular artist\n");
    printf("\n 4. List songs by a particular genre\n");
    printf("\n 5. List the count of songs available\n");
    printf("\n 6. Exit the system\n");
    printf("\n Enter one of the options from above: \n");
    
    scanf("%d", &n);
    
    switch(n) {
        case 1:  //Add new song
            count = addSong(count);
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
            countOfTracks(count);
            break;

        case 6:
            printf("Thankyou. Existing the application\n");
            exit(0);
    }
}