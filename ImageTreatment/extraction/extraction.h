#ifndef _EXTRACTION_H
#define _EXTRACTION_H

#include "../../NeuralNetwork/structure.h"
#include "../Segmentation/segmentation.h"

void extractpar(SDL_Surface *img, int x, int y, Neural_Network *network,
                char *str);
int countlinepar(SDL_Surface *img);
void ReturnPosPar(SDL_Surface *img, int *tab);
void __extractpar(SDL_Surface *img, Neural_Network *network, char *str);
void __extractline(SDL_Surface *img, Neural_Network *network, char *str);
void extractline(SDL_Surface *img, int x, int y, Neural_Network *network,
                 char *str);

#endif