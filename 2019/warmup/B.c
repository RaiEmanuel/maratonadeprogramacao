#include <stdio.h>
#include <math.h>

double resto(const double a, const double b);
double resto(const double a, const double b){
    long int division = a / b;
    return a - division * b;
}

int main(){
    
    double degree;
    int count = 1;
    
    scanf("%lf", &degree);
 
    while(resto(360 * count, degree) != 0 ) ++count;
    
    printf("%.0lf\n", 360 * count / degree);
   
    
    return 0;   
}
