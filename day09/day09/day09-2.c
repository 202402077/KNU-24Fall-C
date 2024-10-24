#include <stdio.h>

typedef struct {
    int productID;
    char productName[100];
    int price;
} Product;

void printProduct(Product p) {
    printf("상품 ID: %d\n", p.productID);
    printf("상품명: %s\n", p.productName);
    printf("가격: %d원\n", p.price);
}

int main() {
    Product products[5];
    int count = 0;

    
    while (count < 5) {
        printf("상품 정보를 입력하세요 (입력 중단은 ID에 0 입력)\n");

        
        printf("상품 ID: ");
        scanf_s("%d", &products[count].productID);

        
        if (products[count].productID == 0) {
            break;
        }

       
        printf("상품명: ");
        scanf_s("%s", products[count].productName, sizeof(products[count].productName));  

     
        printf("가격: ");
        scanf_s("%d", &products[count].price);

        count++;
    }

    printf("\n<< 입력된 상품 목록 >>\n");
    for (int i = 0; i < count; i++) {
        printProduct(products[i]);
        printf("\n");
    }

    return 0;
}
