#include <iostream>
#include <cmath>
#include <iomanip>

int main(void) {
    long int c,x;
    double a;
    
    std::cin >> a;

    // scanf("%lf",&a);
    
    if (a == trunc(a)) {
        a = trunc(a);
        // printf("%.0lf %.0lf\n",a,a);
        std::cout << std::fixed << std::setprecision(0) << a << " " << a << std::endl;
    }
    else if (a<0) {
        c = trunc(a);
        x = c-1;
        // printf("%ld %ld\n",x,c);
        std::cout << x << " " << c << std::endl;
    }
    else if (a>0) {
        c = trunc(a);
        x = c+1;
        // printf("%ld %ld\n",c,x);
        std::cout << c << " " << x << std::endl;
    }
}