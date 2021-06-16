#include <stdio.h>
char line [100];/*_      _
                   \(..)/*/
int w;
int h;
int pe;
int main(void){
  printf("please enter width and height\n");

  fgets(line, sizeof(line), stdin);
  sscanf(line, "%d %d", &w, &h);

  pe= (w + h)*2;

  printf("the perimeter of the rectangle is %.2d", pe);



return 0;
}
