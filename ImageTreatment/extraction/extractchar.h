#ifndef _EXTRACTIONCHAR_H
#define _EXTRACTIONCHAR_H

#include "../../NeuralNetwork/structure.h"
#include "../../NeuralNetwork/toolsnetworks.h"
#include "../../NeuralNetwork/traitement.h"
#include "../Segmentation/segmentation.h"

void extractword(SDL_Surface *img, int x, int y, Neural_Network *network,
                 char *str);
int countwc(SDL_Surface *img);
void ReturnPoswc(SDL_Surface *img, int *tab);
void __extractword(SDL_Surface *img, Neural_Network *network, char *str);
void __extractchar(SDL_Surface *img, Neural_Network *network, char *str);
void extractchar(SDL_Surface *img, int x, int y, Neural_Network *network,
                 char *str);

#endif