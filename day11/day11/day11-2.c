#include <stdio.h>
#include <math.h> 


double f(double x) {
    return -log10(1/x) + sin(x); 
}


double integral(double a, double b, int n) {
    double h = (b - a) / n; 
    double sum = 0.0;

    
    sum += f(a) + f(b);

    
    for (int i = 1; i < n; i++) {
        double x_i = a + i * h; 
        sum += 2 * f(x_i);      
    }

    
    return (h / 2) * sum;
}

int main() {
    double start, end; 
    int max;     

    
    printf("적분할 시작 값을 입력하세요: ");
    scanf_s("%lf", &start);
    printf("적분할 끝 값을 입력하세요: ");
    scanf_s("%lf", &end);
    printf("시행할 최대 구간을 입력하세요(2^n): ");
    scanf_s("%d", &max);

    if (start >= end || max <= 0) {
        printf("입력이 잘못되었습니다. 시작 값은 끝 값보다 작아야 하며, 최대 구간은 양의 정수여야 합니다.\n");
        return 1;
    }

    
    for (int i = 0; i <= max; i++) {
        int panel = pow(2, i); 
        double result = integral(start, end, panel); 
        printf("구간 %d 적분결과: %.6lf\n", panel, result);
    }

    return 0;
}
