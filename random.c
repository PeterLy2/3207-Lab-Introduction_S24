#include <stdio.h>
#include <stdlib.h>
#include <time.h>


char randchar(){
  char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  int randNum = rand() % 26;
  char letter = alphabet[randNum];
  return letter;


}