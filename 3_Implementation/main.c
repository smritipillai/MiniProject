#include "header.h"

int main() {
    struct playlist p[1000];
    int i=0, n=0, count=0;
    while(n!=6) {
        printf("\n 1. Add song to the playlist\n");
        printf("\n 2. Display songs available on the playlist\n");
        printf("\n 3. List songs by a particular artist\n");
        printf("\n 4. List songs by a particular genre\n");
        printf("\n 5. List the count of songs available\n");
        printf("\n 6. Exit the system\n");
        printf("\n Enter one of the options from above: \n");
        scanf("%d", &n);
        switch(n){
            case 1:  //Add new song
            printf("Enter song name: \n");
            scanf("%s", p[i].songName); 

            printf("Enter artist first name: \n");
            scanf("%s", p[i].f_artist); 

            printf("Enter artist last name: \n");
            scanf("%s", p[i].l_artist); 

            printf("Enter gender of artist (M/F): \n");
            scanf("%s", p[i].gender);

            printf("Enter genre (Happy(H) / Emotional(E)): \n");
            scanf("%s", p[i].genre);

            printf("Enter platform on which the song was streamed (Spotify(0), Saavn(1), Gaana(2)):\n ");
            scanf("%d", &p[i].platform);

            count++;
            break;

            case 2: //display songs
            printf("The songs available in your playlist are:\n");
            for(i=0; i<count; i++){
                printf("Song name : %s, ", p[i].songName);
                printf("Artist first name : %s, ", p[i].f_artist);
                printf("Artist last name : %s, ", p[i].l_artist);
                printf("Genre : %s, ", p[i].genre);
                printf("Streamed on : %d\n", p[i].platform);
            }
            break;

            case 3: //List songs by particular artist
            printf("Enter artist first name: \n");
            char fname[50];
            char lname[50];
            scanf("%s", fname);
            printf("Enter artist last name: \n");
            scanf("%s", lname);
            for(i=0; i<count; i++){
                if(strcmp(fname, p[i].f_artist)==0 && strcmp(lname, p[i].l_artist)==0){
                    printf("%s\n", p[i].songName);
                }
            }
            break;

            case 4: //List songs by a particular genre
            printf("Enter genre (0-Happy / 1-Emotional): \n");
            char g[1];
            scanf("%s", g);
            for(i=0; i<count; i++){
                if(strcmp(g ,p[i].genre)==0){
                    printf("%s %s %s\n", p[i].songName, p[i].f_artist, p[i].l_artist);
                }
            }
            break;

            case 5: //count of songs available
            printf("The count of songs available in your playlist are: %d \n", count);
            break;

            case 6:
            exit(0);
        }
    }
    return 0;
}