# Crescente
## Esercizio numeri strettamente crescenti
Il codice definisce una funzione "crescente" che prende in input un vettore v di interi e la sua lunghezza N, e restituisce true se i valori del vettore sono strettamente crescenti e false altrimenti. La funzione scorre il vettore dal secondo elemento in poi e controlla se ciascun elemento è strettamente maggiore del suo predecessore. Se un elemento è minore o uguale al suo predecessore, la funzione restituisce false.

Nel main, il programma chiede all'utente di inserire il numero di elementi del vettore e gli elementi del vettore stesso. Quindi, chiama la funzione isStrictlyIncreasing passando il vettore e la sua lunghezza, e stampa un messaggio appropriato in base al risultato della funzione.

```C
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

```
