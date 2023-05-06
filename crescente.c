#include <stdio.h>
#include <stdbool.h>

bool crescente(int v[], int N) {
	int i;
    for (i = 1; i < N; i++) {
        if (v[i] <= v[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int N;
    printf("Inserisci il numero di elementi del vettore: ");
    scanf("%d", &N);
	int i; 
	
    int v[N];
    printf("Inserisci gli elementi del vettore:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &v[i]);
    }

    if (crescente(v, N)) {
        printf("I valori del vettore sono strettamente crescenti.\n");
    } else {
        printf("I valori del vettore non sono strettamente crescenti.\n");
    }

    return 0;
}

