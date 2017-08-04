#include<stdlib.h>
#include<stdio.h>

int bufferSize = 256;
char *buffer[bufferSize];
int bufferControl=0;
int bufferPos=0;

FILE *file;
file = fopen("sample.sql", "a+");

void clearBuffer(){
        buffer = [];
        bufferControl = 0;
        bufferPos = 0;
    }

void fullBuffer(){
        char nextChar = fgetc(file);
        while (bufferControl < bufferSize){
            buffer[bufferControl] = nextChar;
            nextChar = fgetc(file);
          }
}
char getChar(){
        bufferPos = bufferPos + 1;
        return buffer[bufferPos-1];
}
void resetBuffer(){
        bufferPos = bufferPos - 1;
}
void refillBuffer(){
        while(){
            if(bufferPos == bufferSize):
                clearBuffer();
                fullBuffer();
              }
}

fclose(file);
