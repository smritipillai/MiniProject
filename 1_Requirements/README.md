# Requirements


## Introduction
 During these unprecedented times where people are spending a lot of time at home, you tend to look out for something which can keep you engaged apart from worklife. As humans we listen to music when we are stressed or when we are happy. Music isn’t just an art form or a language, but it also affects the human mind and body. It stimulates our minds and thoughts that come with it.

According to studies, music has therapeutic properties, and music therapy programs help with anxiety, dementia, stress management, and self-confidence. According to a paper published in the journal Neuroscience, personalized music-based interventions is encouraged for the treatment of brain disorders associated with abnormal mood and emotion-related brain activity.

## Research
### Benefits of this project

Music therapy has developed its practice and research approaches within a qualitative framework more related to humanistic traditions than to medical science. Music medicine has therefore developed as a separate discipline, endeavouring to incorporate the legitimate therapeutic use of music within a medical framework. There are papers that argue that more extensive communication and collaboration between the methods developed within the music therapy community, and research based on medical science, could lead to a better understanding of the place of music as a therapeutic tool, both as regards its efficacy and its limits. Research has shown that music may influence central physiological variables like blood pressure, heart rate, respiration, EEG measurements, body temperature and galvanic skin response. Music influences immune and endocrine function. The existing research literature shows growing knowledge of how music can ameliorate pain, anxiety, nausea, fatigue and depression. It is just much better when you listen to music based on your interests. This project helps you to 

## Functional Capabilities

While adding a new song to your favourites playlist you have to mention certain attributes like the song name, the artist name and the platform on which this song is available(for eg., Spotify, Gaana etc.) 

The following functions are implemented in this project
- Add a song to the favourites playlist
- Display all the available songs on the favourites playlist
- List songs by a specific artist/genre of you choice
- Count the number of tracks available
- Exit the program

![alt text](https://github.com/smritipillai/MiniProject/blob/main/1_Requirements/Req_diag.png)
### Assumptions made
There are already advanced version of this project available where music playlist recommendation is done by identifying user's emotions. This is just a base level project executed using Command Line Interface(CLI).

## SWOT Analysis

**S**- Large number of users since everyone listens to music these days and user can get to listen to new music suggested by different users

**W**- UI is not visually appealing since it's a terminal application

**O**- Advancement in technology might help to the application better combining with other technologies like AI, the application c
an be advanced by making it a mobile application.
**T**- Already advanced version of this application exists

## 4sW's and 1H

**WHO:**
An user who wants to likes to keep a list of their favourite tracks.

**WHAT:**
A person's memory can retain very little information. Some information people tend to forget or misremember things. So for that purpose the user can keep a track of their favourite playlist.

**WHEN:**
As long as there's expanding data, this problem might exist all the time.

**WHERE:**
This sytem can be used by anyone with a laptop to enter, retrieve information from the stored data.

**HOW:**
During these advanced times, where data keeps expanding this system helps people to take a little information off their huge data.

 
## Detail Requirement

### High-Level Requirement:

| ID | Description | Category | Status |
| ----- | ----------------  | ------ | ------- |
| HR01 | addSong()  | Technical | Implemented |
| HR02 | displayPlaylist() | Technical | Implemented |
| HR03 | songsByArtist() | Technical | Implemented |
| HR04 | songsByGenre() | Technical | Implemented |
| HR05 | countOfTracks() | Technical | Implemented |
| HR06 | exit() | Technical | Implemented |

### Low-Level Requirement:

| ID | Description | HLR ID | Status |
| ----- | ----------------  | ------ | ------- |
| LR01 | Add new songs to the existing playlist | HR01 | Implemented |
| LR02 | Display the available songs in the playlist | HR02 | Implemented |
| LR03 | Display certain songs depending on factors like artist, genre (happy, emotional) | HR03, HR04 | Implemented |
| LR04 | Display the number of songs available in the playlist | HR05 | Implemented |
| LR05 | Exit from the system | HR06 | Implemented |

