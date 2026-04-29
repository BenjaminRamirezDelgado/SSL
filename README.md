# 00 — C Hello World

## Autor

- **Usuario GitHub:** BenjaminRamirezDelgado
- **Legajo:** 2098295
- **Apellido:** Ramírez Delgado
- **Nombre:** Anderson Benjamin
- **Curso:** K2052 — 2026

## Enunciado

Seleccionar, instalar, configurar y probar un compilador C23. La prueba consiste en:

1. Escribir un programa hello.c que envíe a stdout Hello, World! opcionalmente con la versión del lenguaje.
2. Compilar desde la línea de comandos.
3. Ejecutar y verificar la salida.
4. Redirigir la salida a output.txt y verificar su contenido.
5. (Extra) Compilar con make.
6. (Extra) Ejecutar con make.

## Hipótesis de trabajo

- GCC en MSYS2 soporta C23 con el flag -std=c23.
- La macro __STDC_VERSION__ permite verificar la versión del estándar en tiempo de compilación.
- make simplifica la compilación y ejecución de forma reproducible.

## Compilador

- **Compilador:** GCC (GNU Compiler Collection)
- **Versión del compilador:** 15.2.0 (MSYS2/UCRT64)
- **Flag de estándar:** -std=c23
- **__STDC_VERSION__:** 202311L — C23 (ISO/IEC 9899:2024)

## Créditos extra

- Compilar con make
- Ejecutar con make run