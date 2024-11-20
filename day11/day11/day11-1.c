#include <stdio.h>
#include <math.h> 

void quadratic(double a, double b, double c) {
    double discriminant, root1, root2;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) { 
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("서로 다른 두 실근: x = %.2f 또는 x = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) { 
        root1 = -b / (2 * a);
        printf("중근: x = %.2f\n", root1);
    }
    else { 
        printf("허근을 가지므로 값을 출력하지 않습니다.\n");
    }
}

int main() {
    double a, b, c;

    
    printf("이차방정식의 계수 a, b, c를 입력하세요 (a ≠ 0): ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("a가 0이면 이차방정식이 아닙니다.\n");
    }
    else {
        quadratic(a, b, c);
    }

    return 0;
}
