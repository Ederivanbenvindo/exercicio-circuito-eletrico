// circuito eletrico misto com 1 fonte e tres resistores

#include <stdio.h>
#include <stdlib.h>

int main(void) {

      // Variaveis
      float e_fonte , e_resistor_R1 , e_resistor_R2, e_resistor_R3, Req, RT, IT, VR1, IR1, VR2, IR2, VR3, IR3;

      //Entradas
      printf("entre com valor da fonte: ");
      scanf("%f", &e_fonte);
      
      printf("entre com o valor R1: ");
      scanf("%f", &e_resistor_R1);
      
      printf("entre com o valor R2: ");
      scanf("%f", &e_resistor_R2);

      printf("entre com o valor R3: ");
      scanf("%f", &e_resistor_R3);

      // Processamento
    if ( e_fonte !=0 && e_resistor_R1 !=0 && e_resistor_R2 !=0 && e_resistor_R3 != 0){

      Req = (e_resistor_R2 * e_resistor_R3) / (e_resistor_R2 + e_resistor_R3);

      RT = e_resistor_R1 + Req;

      IT = e_fonte / RT;

      VR1 = IT * e_resistor_R1;
      IR1 = RT;

      VR2 = e_fonte - VR1;
      IR2 = VR2 / e_resistor_R2;

      VR3 = e_fonte - VR1;
      IR3 = VR3 / e_resistor_R3;

      //Saidas
      printf(" Resistencia total: %.3f [ohm] \n", RT);
      printf("Corrente total: %.3f [A] \n\n", IT);
      printf("Tensao resitor R1: %.3f [V] \n", VR1);
      printf("Corrente resitor R1: %.3f [A] \n\n", IR1);
      printf("Tensao resitor R2: %.3f [V] \n", VR2);
      printf("Corrente resistor R2: %.3f [A] \n\n", IR2);
      printf("Tensao resistor R3: %.3f [V] \n", VR3);
      printf("Corrente resistor R3: %.3f [A] \n", IR3);

}else{
  printf("Entre com valores diferentes de 0 !!\n\n");

}
  return 0;
}
