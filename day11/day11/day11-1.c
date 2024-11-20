#include <stdio.h>
#include <math.h> 

void quadratic(double a, double b, double c) {
    double discriminant, root1, root2;

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) { 
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("���� �ٸ� �� �Ǳ�: x = %.2f �Ǵ� x = %.2f\n", root1, root2);
    }
    else if (discriminant == 0) { 
        root1 = -b / (2 * a);
        printf("�߱�: x = %.2f\n", root1);
    }
    else { 
        printf("����� �����Ƿ� ���� ������� �ʽ��ϴ�.\n");
    }
}

int main() {
    double a, b, c;

    
    printf("������������ ��� a, b, c�� �Է��ϼ��� (a �� 0): ");
    scanf_s("%lf %lf %lf", &a, &b, &c);

    if (a == 0) {
        printf("a�� 0�̸� ������������ �ƴմϴ�.\n");
    }
    else {
        quadratic(a, b, c);
    }

    return 0;
}
