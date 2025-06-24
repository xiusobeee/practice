// #include <stdio.h>
// #include <math.h>

// int main(){
//     double a, b, c;
//     scanf("%1f%1f%1f", &a, &b, &c);
//     if ((b*b - 4*a*c) > 0){
//         printf("Two different roots x1=%d , x2=%0.2f", (-b + sqrt(b*b - 4*a*c)) / (2*a), (-b - sqrt(b*b - 4*a*c)) / (2*a));
//     }
//     else if ((b*b - 4*a*c) == 0)
//     {
//         printf("Two same roots x= %0.2f", (-b + sqrt(b*b - 4*a*c)) / (2*a));
//     }
//     else {
//         printf("No real root");
//     }
//     return 0;
// }

#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c;
    scanf("%lf%lf%lf", &a, &b, &c);  

    double discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        double x1 = (-b + sqrt(discriminant)) / (2 * a);
        double x2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("Two different roots x1=%.2f , x2=%.2f\n", x1, x2);
    } else if (discriminant == 0) {
        double x = -b / (2 * a);
        printf("Two same roots x=%.2f\n", x);
    } else {
        printf("No real root\n");
    }

    return 0;
}