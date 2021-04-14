#include "header.h"

int main() {
    FILE *fptr;
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
                fptr = fopen("playlist.dat", "ab");
                if(fptr == NULL){
                    fprintf(stderr, "\nError to write data into file");
                    exit(1);
                }
                printf("Enter song name: \n");
                scanf("%s", p[i].songName); 
                fflush(stdin);

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
                fwrite(&p, sizeof(p), 1, fptr);
                if(fwrite!=0)
                    printf("Song has been added to playlist\n");
                else
                    printf("Error writing into file! \n");
                fclose(fptr);
                break;

            case 2: //display songs
                printf("The songs available in your playlist are:\n");
                fptr = fopen("playlist.dat", "rb");
                while((fread(&p, sizeof(p), 1, fptr))>0){
                    printf("Song name : %s, ", p[i].songName);
                    printf("Artist first name : %s, ", p[i].f_artist);
                    printf("Artist last name : %s, ", p[i].l_artist);
                    printf("Genre : %s, ", p[i].genre);
                    printf("Streamed on : %d\n", p[i].platform);
                    printf("\n-------------------------------------------\n");
                }
                fclose(fptr);
                break;

            case 3: //List songs by particular artist
                fptr = fopen("playlist.dat","rb");
                printf("Enter artist first name: \n");
                char fname[50];
                char lname[50];
                scanf("%s", fname);
                printf("Enter artist last name: \n");
                scanf("%s", lname);
                int t=0;
                printf("The songs by the artist are: \n")
                while((fread(&p,sizeof(p),1,fptr))>0){
                    if(strcmp(fname, p[i].f_artist)==0 && strcmp(lname, p[i].l_artist)==0){
                        printf("%s\n", p[i].songName);
                        t=1;
                    }
                }
                fclose(fptr);
                if(t==0){
                    printf("\n\n Sorry! Songs from that artist isn't available in your playlist!\n");
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