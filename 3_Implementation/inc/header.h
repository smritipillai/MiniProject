/**
 * @file header.h
 * @author Smriti Pillai (https://github.com/smritipillai)
 * @brief contains all header files and structure definition
 * @version 0.1
 * @date 2021-04-13
 * 
 * @copyright Copyright (c) 2021
 * 
 */

#ifndef __HEADER_H__
#define __HEADER_H__

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

/**
 * @brief Detailed structure of playlist
 * 
 */
typedef struct playlist {
    char songName[100];
    char f_artist[50];
    char l_artist[50];
    char gender[1];
    char genre[1];
    int platform;
} playlist;

/**
 * @brief Add new song to the playlist
 * 
 */
void addSong();

/**
 * @brief Display the songs available in the playlist
 * 
 */
void displayPlaylist();

/**
 * @brief Display songs by certain artist of user choice
 * 
 */
void songsByArtist();

/**
 * @brief Display songs of certain genre of user choice
 * 
 */
void songsByGenre();

/**
 * @brief Count of number of tracks already available in the playlist
 * 
 */
void countOfTracks();

#endif