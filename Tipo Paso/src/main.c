#include "MKL25Z4.h"
#include "TIPOPASO.h"
int main(){
    SIM -> SCGC5|=SIM_SCGC5_PORTA_MASK|SIM_SCGC5_PORTB_MASK;
    PORTA -> PCR[1] =PORT_PCR_MUX(0);
    PORTA -> PCR[2] =PORT_PCR_MUX(0);
    PORTA -> PCR[3] =PORT_PCR_MUX(0);
    int num;
    printf("ingrese la cantidad de pasos");
    scanf("%d", num);
    int c = PTA -> PDIR&(1 << 1);
    int n = PTA -> PDIR&(1 << 2);
    int m = PTA -> PDIR&(1 << 3);     
    if(c == 1){
        char tipo = 'C';
        PT( tipo, num); 
    } else if ( n == 1){
        char tipo = 'N';
        PT( tipo, num); 
    } else if ( m == 1){
        char tipo = 'M';
        PT( tipo, num); 
    }
}
