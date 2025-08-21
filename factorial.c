#include <stdio.h>
#include <gmp.h>
#include <time.h>

// Factorial iterativo con GMP
void factorial_iterativo(mpz_t resultado, int n) {
    mpz_set_ui(resultado, 1);
    for (int i = 1; i <= n; i++) {
        mpz_mul_ui(resultado, resultado, i);
    }
}

// Factorial recursivo con GMP
void factorial_recursivo(mpz_t resultado, int n) {
    if (n == 0 || n == 1) {
        mpz_set_ui(resultado, 1);
    } else {
        mpz_t temp;
        mpz_init(temp);
        factorial_recursivo(temp, n - 1);
        mpz_mul_ui(resultado, temp, n);
        mpz_clear(temp);
    }
}

int main() {
    int numero;
    printf("Ingrese un número para calcular su factorial: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("El factorial no está definido para números negativos.\n");
        return 1;
    }

    mpz_t resultado_iterativo, resultado_recursivo;
    mpz_init(resultado_iterativo);
    mpz_init(resultado_recursivo);

    clock_t inicio, fin;
    double tiempo_iterativo, tiempo_recursivo;

    // Factorial iterativo
    inicio = clock();
    factorial_iterativo(resultado_iterativo, numero);
    fin = clock();
    tiempo_iterativo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    // Factorial recursivo
    inicio = clock();
    factorial_recursivo(resultado_recursivo, numero);
    fin = clock();
    tiempo_recursivo = (double)(fin - inicio) / CLOCKS_PER_SEC;

    // Mostrar resultados
    printf("\nFactorial de %d (Iterativo):\n", numero);
    mpz_out_str(stdout, 10, resultado_iterativo);
    printf("\nTiempo de ejecución (Iterativo): %.6f segundos\n", tiempo_iterativo);

    printf("\nFactorial de %d (Recursivo):\n", numero);
    mpz_out_str(stdout, 10, resultado_recursivo);
    printf("\nTiempo de ejecución (Recursivo): %.6f segundos\n", tiempo_recursivo);

    // Liberar memoria
    mpz_clear(resultado_iterativo);
    mpz_clear(resultado_recursivo);

    return 0;
}
