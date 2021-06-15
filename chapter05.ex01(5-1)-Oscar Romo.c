#include <stdio.h>
/*in this command we covert centigrades in farenheit (c=centigrades,f=farenheit*/
float c ;
float f; 
int main(void){


  printf("Enter centigrades\n");
  scanf("%f", &c);
  /*to convert i we use f=9/5*c+32*/
  f= (c*9/5)+32;

  printf("the result of the operation is %.f", f);



return 0;
}
