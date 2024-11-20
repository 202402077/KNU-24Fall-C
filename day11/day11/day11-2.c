#include <stdio.h>
#include <math.h> 


double f(double x) {
    return -log10(x) + sin(x); 
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

    
    printf("������ ���� ���� �Է��ϼ���: ");
    scanf_s("%lf", &start);
    printf("������ �� ���� �Է��ϼ���: ");
    scanf_s("%lf", &end);
    printf("������ �ִ� ������ �Է��ϼ���(2^n): ");
    scanf_s("%d", &max);

    if (start >= end || max <= 0) {
        printf("�Է��� �߸��Ǿ����ϴ�. ���� ���� �� ������ �۾ƾ� �ϸ�, �ִ� ������ ���� �������� �մϴ�.\n");
        return 1;
    }

    
    for (int i = 0; i <= max; i++) {
        int panel = pow(2, i); 
        double result = integral(start, end, panel); 
        printf("���� %d ���а��: %.6lf\n", panel, result);
    }

    return 0;
}
