#include <stdio.h>


int main(void){ 
/*Here you need to calculate the area and perimeter of a rectangle*/
int area,   perimeter,  width,   height;
width = 3;
height = 5;

perimeter = (width*2)+(height*2);
area = width*height;


printf ("the area of a rectangle of 3 by 5 inches is %.2d and the perimeter is %.2d inches", area, perimeter);


/*you need a width=6.8 and height=2.3 inches to use float
<float area,   perimeter,  width,   height> and use %.2f to show the decimals*/
 return 0;

  }
