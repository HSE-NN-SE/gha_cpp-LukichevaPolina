//Copyright 2020 Lukicheva Polina
#include "Fraction.h"
#include <stdio.h>

int main() {
	Fraction a(1, 0); // 1/2
	Fraction b(a);
	Fraction c(5, 6);
	printf("%d", c.getValue());
	printf("%d"c.getValue());
	printf("%d"(a + c).getValue());
	return 0;
}
