#include<stdio.h>

void capnhatphantu(int *arr, int giatrimoi, int vitri, int n) {
    if (vitri >= 0 && vitri < n) { 
        arr[vitri] = giatrimoi;    
    } else {
        printf("Vi tri khong hop le\n");
    }
}


void inmang(int *arr, int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]); 
    }
    printf("\n"); 
}

int main() {
    int mang[] = {133, 120, 330, 4330, 5330}; 
    int n = sizeof(mang) / sizeof(mang[0]);

    
    printf("Mang ban dau: ");
    inmang(mang, n);

   
    int viTriCanCapNhat = 2;
    int giaTriMoi = 193838;
    capnhatphantu(mang, giaTriMoi, viTriCanCapNhat, n);

    
    printf("Mang sau khi cap nhat: ");
    inmang(mang, n);

    return 0;
}

