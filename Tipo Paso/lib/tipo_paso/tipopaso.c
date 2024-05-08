#include "TIPOPASO.h"
#include "MKL25Z4.h"
#include "ctype.h"
int pines[4] = {0,1,2,3};
int Vc[4][4] =  { 
                {0,0,0,1},
                {0,0,1,0},
                {0,1,0,0},
                {1,0,0,0},
                };
int Vn[4][4] =  { 
                {0,0,1,1},
                {0,1,1,0},
                {1,1,0,0},
                {1,0,0,1},
                };
int Vm[4][8] =  { 
                {0,0,0,1},
                {0,0,1,1},
                {0,0,1,0},
                {0,1,1,0},
                {0,1,0,0},
                {1,1,0,0},
                {1,0,0,0},
                {1,0,0,1},
                };
void pt(char tipo, int pasos){
    char tipo = toupper(tipo);
    if(tipo == 'C'){
        for(int i = 0; i < pasos; i++){
        int resto = i % 4;
        for(int j = 0; j < 4; j++ ){
            PTE -> PSOR|=(Vc[j][resto] << pines[j]); 
            }
        } 
    } else if (tipo == 'N'){
        for(int i = 0; i < pasos; i++){
        int resto = i % 4;
        for(int j = 0; j < 4; j++ ){
            PTE -> PSOR|=(Vn[j][resto] << pines[j]); 
            }
        }
    } else if (tipo == 'M'){
        for(int i = 0; i < pasos; i++){
        int resto = i % 8;
        for(int j = 0; j < 4; j++ ){
            PTE -> PSOR|=(Vc[j][resto] << pines[j]); 
            }
        }
    } 