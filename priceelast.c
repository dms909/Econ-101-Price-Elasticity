#include <stdio.h>

double GetElast(double firstQuant, double secQuant, double firstPrice, double secPrice) {

  double quantity = ((secQuant - firstQuant)/((secQuant + firstQuant) / 2));
  double price = ((secPrice - firstPrice)/((secPrice + firstPrice) / 2));

  double elast = quantity / price;

return elast;
}
int main(void) {
double firstQuant;
double secQuant;
double firstPrice;
double secPrice;



printf("Enter the first quantity: \n");
scanf("%lf", &firstQuant);

printf("Enter the second quantity: \n");
scanf("%lf", &secQuant);

printf("Enter the first price: \n");
scanf("%lf", &firstPrice);

printf("Enter the second price: \n");
scanf("%lf", &secPrice);

printf("The elasticity is %lf\n", GetElast(firstQuant, secQuant, firstPrice, secPrice));

}
