//¨Pasos aleatorios seleccionado por un boton
#include "MKL25Z4.h"
#include "PASON.h"
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK;
    PORTA -> PCR[1] =PORT_PCR_MUX(0);
    int gatillo = PTA -> PDIR&(1 << 1);
    if( gatillo == '1' ){
        int pasos = rand() % 100;
        SN(pasos);
    }
}