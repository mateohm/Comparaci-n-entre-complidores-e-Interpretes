# -*- coding: utf-8 -*-


import time

def factorial_iterativo(n):
    resultado = 1
    for i in range(1, n + 1):
        resultado *= i
    return resultado

def factorial_recursivo(n):
    if n == 0 or n == 1:
        return 1
    return n * factorial_recursivo(n - 1)

def main():
    print("Elige el método para calcular el factorial:")
    print("1. Iterativo")
    print("2. Recursivo")

    opcion = input("Ingresa 1 o 2: ")

    if opcion not in ["1", "2"]:
        print("Opción no válida.")
        return

    num = int(input("Ingresa un número entero positivo: "))

    if num < 0:
        print("El factorial no está definido para números negativos.")
        return

    inicio = time.time()

    if opcion == "1":
        resultado = factorial_iterativo(num)
    else:
        resultado = factorial_recursivo(num)

    fin = time.time()

    print(f"El factorial de {num} es: {resultado}")
    print(f"Tiempo de ejecución: {fin - inicio:.6f} segundos")

if __name__ == "__main__":
    main()
