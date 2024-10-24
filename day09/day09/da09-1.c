#include <stdio.h>

typedef struct {
    float x, y, z;
} Vector;

Vector vector_add(Vector v1, Vector v2) {
    Vector result;
    result.x = v1.x + v2.x;
    result.y = v1.y + v2.y;
    result.z = v1.z + v2.z;
    return result;
}

Vector vector_dif(Vector v1, Vector v2) {
    Vector result;
    result.x = v1.x - v2.x;
    result.y = v1.y - v2.y;
    result.z = v1.z - v2.z;
    return result;
}

float vector_scalar(Vector v1, Vector v2) {
    return v1.x * v2.x + v1.y * v2.y + v1.z * v2.z;
}

Vector vector_cross(Vector v1, Vector v2) {
    Vector result;
    result.x = v1.y * v2.z - v1.z * v2.y;
    result.y = v1.z * v2.x - v1.x * v2.z;
    result.z = v1.x * v2.y - v1.y * v2.x;
    return result;
}

int main() {
    Vector v1, v2, result;
    float dot_product;
    int a;

    printf("첫 번째 벡터의 x, y, z 좌표를 입력하세요: ");
    scanf_s("%f %f %f", &v1.x, &v1.y, &v1.z);



    printf("두 번째 벡터의 x, y, z 좌표를 입력하세요: ");
    scanf_s("%f %f %f", &v2.x, &v2.y, &v2.z);

    printf("1.벡터의 합\n");
    printf("2.벡터의 차\n");
    printf("3.벡터의 외적\n");
    printf("4.벡터의 내적\n");
    printf("5.종료\n");
    printf("명령 입력:");
    scanf_s("%d", &a);
    if (a == 1) {
        result = vector_add(v1, v2);
        printf("벡터의 합: (%.2f, %.2f, %.2f)\n", result.x, result.y, result.z);
    }
    else if (a == 2) {
        result = vector_dif(v1, v2);
        printf("벡터의 차: (%.2f, %.2f, %.2f)\n", result.x, result.y, result.z);
    }
    else if (a == 3) {
        dot_product = vector_scalar(v1, v2);
        printf("벡터의 내적: %.2f\n", dot_product);
    }
    else if (a == 4) {
        result = vector_cross(v1, v2);
        printf("벡터의 외적: (x:%.2f  y:%.2f  z:%.2f)\n", result.x, result.y, result.z);
    }
    else {
        return 0;
    }
    return 0;
}
