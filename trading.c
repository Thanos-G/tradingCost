#include <stdio.h>

int main() {
	
	float price, fprice, e; //e is a temporary variable for calculating the cost
	int pieces;
	printf("Give pieces and price: ");
	scanf("%d %f", &pieces, &price);
	fprice = pieces*price;
	
	if(pieces<20) {
		e=fprice*0.10;
		fprice=fprice+e; }
	else if(pieces>=80 && pieces<=100) {
		e=fprice*0.15;
		fprice=fprice-e; }
	else {
		e=fprice*0.25;
		fprice=fprice-e; }
		
	printf("Final price: %.2f\n", fprice); 
	return 0;
}
