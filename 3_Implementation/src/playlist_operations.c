#include  "header.h"

int addSong(int count) {
    FILE *fptr;
    struct playlist p;
    fptr = fopen("playlist.txt", "ab+");
    if(fptr == NULL){
        fprintf(stderr, "\nError to write data into file");
        exit(1);
    }
    printf("Enter song name: \n");
    scanf("%s", p.songName); 
    fflush(stdin);

    printf("Enter artist first name: \n");
    scanf("%s", p.f_artist); 

    printf("Enter artist last name: \n");
    scanf("%s", p.l_artist); 

    printf("Enter gender of artist (M/F): \n");
    scanf("%s", p.gender);

    printf("Enter genre (Happy(H) / Emotional(E)): \n");
    scanf("%s", p.genre);

    printf("Enter platform on which the song was streamed (Spotify(0), Saavn(1), Gaana(2)):\n ");
    scanf("%d", &p.platform);

    count++;

    fwrite(&p, sizeof(p), 1, fptr);
    if(fwrite!=0)
        printf("Song has been added to playlist\n");
    else
        printf("Error writing into file! \n");

    fclose(fptr);

    return count;
}

void displayPlaylist() {
    FILE *fptr;
    struct playlist p;
    fptr = fopen("playlist.txt", "rb+");
    if(fptr == NULL){
        fprintf(stderr, "\nError to write data into file");
        exit(1);
    }
    printf("The songs available in your playlist are:\n");
    while((fread(&p, sizeof(p), 1, fptr))>0){
        printf("Song name : %s, ", p.songName);
        printf("Artist first name : %s, ", p.f_artist);
        printf("Artist last name : %s, ", p.l_artist);
        printf("Genre : %s, ", p.genre);
        printf("Streamed on : %d\n", p.platform);
        printf("\n-------------------------------------------\n");
    }
    fclose(fptr);
}

void songsByArtist() {
    FILE *fptr;
    struct playlist p;
    int t=0;
    fptr = fopen("playlist.txt", "rb+");
    if(fptr == NULL){
        fprintf(stderr, "\nError to write data into file");
        exit(1);
    }
    printf("Enter artist first name: \n");
    char fname[50];
    char lname[50];
    scanf("%s", fname);
    printf("Enter artist last name: \n");
    scanf("%s", lname);
    printf("The songs by the artist are: \n");
    while((fread(&p,sizeof(p),1,fptr))>0){
        if(strcmp(fname, p.f_artist)==0 && strcmp(lname, p.l_artist)==0){
            printf("%s\n", p.songName);
            t=1;
        }
    }
    fclose(fptr);
    if(t==0){
        printf("\n\n Sorry! Songs from that artist isn't available in your playlist!\n");
    }
}

void songsByGenre() {
    FILE *fptr;
    struct playlist p;
    int t=0;
    fptr = fopen("playlist.txt", "rb+");
    if(fptr == NULL){
        fprintf(stderr, "\nError to write data into file");
        exit(1);
    }
    printf("Enter genre (Happy(H) / Emotional(E)): \n");
    printf("Type in H or E to proceed: \n");
    char g[1];
    scanf("%s", g);
    while((fread(&p,sizeof(p),1,fptr))>0){
        if(strcmp(g , p.genre)==0){
            printf("%s by %s\n", p.songName, p.f_artist);
            t=1;
        }
    }
    fclose(fptr);
    if(t==0){
        printf("\n\n Sorry! Songs of that genre isn't available in your playlist!\n");
    }
}

void countOfTracks(int count) {
    printf("The count of songs available in your playlist are: %d \n", count);
}
