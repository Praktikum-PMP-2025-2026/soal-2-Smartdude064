#include <stdio.h>
#include <string.h>

// fungsi rekursi yang berguna dalam melakukan looping transformasi (algoritma utama)
int recursion(int j, int n) {
    if (n == 1) {
        return j;
    }
    if (n % 2 == 0) {
        n /= 2;
    } else if (n % 2 != 0) {
        n = 3*n + 1;
    }
    //printf("Iterasi ke-%d : %d\n", j+1, n);
    j++;
    return recursion(j, n);
}

// fungsi utama program ketika berjalan
int main() {
    // deklarasi variabel
    int n, T, j, arr[100];

    //input dari user
    scanf("%d", &T);
    for (int i = 0; i < T; i++) {
        scanf("%d", &n);
        arr[i] = n;
    }

    //looping dalam menghasilkan output sebanyak T 
    for (int i = 0; i < T; i++) {
        /*while (n != 1) {
            if (n % 2 == 0) {
                n /= 2;
            } else if (n % 2 != 0) {
                n = 3*n + 1;
            } else if (n == 1) {
                break;
            }
            printf("Iterasi ke-%d : %d\n", j+1, n);
            j++;
        }*/
        
        //output ke terminal
        j = recursion(0, arr[i]);
        printf("LANGKAH %d\n", j);
    }
}
