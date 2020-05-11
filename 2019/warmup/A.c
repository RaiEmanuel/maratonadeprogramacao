Here we will see how to get the modulus of two floating or double type data in C. The modulus is basically finding the remainder. For this, we can use the remainder() function in C. The remainder() function is used to compute the floating point remainder of numerator/denominator.

So the remainder(x, y) will be like below.

remainder(x, y) = x – rquote * y

The rquote is the value of x/y. This is rounded towards the nearest integral value. This function takes two arguments of type double, float, long double, and returns the remainder of the same type, that was given as argument. The first argument is numerator, and the second argument is the denominator.
Example

#include <stdio.h>
#include <math.h>
main() {
   double x = 14.5, y = 4.1;
   double res = remainder(x, y);
   printf("Remainder of %lf/%lf is: %lf\n",x,y, res);
   x = -34.50;
   y = 4.0;
   res = remainder(x, y);
   printf("Remainder of %lf/%lf is: %lf\n",x,y, res);
   x = 65.23;
   y = 0;
   res = remainder(x, y);
   printf("Remainder of %lf/%lf is: %lf\n",x,y, res);
}

Output

Remainder of 14.500000/4.100000 is: -1.900000
Remainder of -34.500000/4.000000 is: 1.500000
Remainder of 65.230000/0.000000 is: -1.#IND00
