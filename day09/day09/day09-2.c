#include <stdio.h>

typedef struct {
    int productID;
    char productName[100];
    int price;
} Product;

void printProduct(Product p) {
    printf("��ǰ ID: %d\n", p.productID);
    printf("��ǰ��: %s\n", p.productName);
    printf("����: %d��\n", p.price);
}

int main() {
    Product products[5];
    int count = 0;

    
    while (count < 5) {
        printf("��ǰ ������ �Է��ϼ��� (�Է� �ߴ��� ID�� 0 �Է�)\n");

        
        printf("��ǰ ID: ");
        scanf_s("%d", &products[count].productID);

        
        if (products[count].productID == 0) {
            break;
        }

       
        printf("��ǰ��: ");
        scanf_s("%s", products[count].productName, sizeof(products[count].productName));  

     
        printf("����: ");
        scanf_s("%d", &products[count].price);

        count++;
    }

    printf("\n<< �Էµ� ��ǰ ��� >>\n");
    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
        printf("\n");
    }

    return 0;
}
