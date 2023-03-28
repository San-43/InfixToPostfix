# InfixToPostfix
## Algoritmo para convertir una expresión infija en sufija
### En este caso, usamos pilas para convertir infijo a postfijo. Tenemos una pila de operadores, una pila de salida y una línea de entrada. La pila de operadores funciona como FILO (primero en entrar, último en salir). La pila de salida funciona como FIFO (primero en entrar, primero en salir).

## El siguiente algoritmo convierte infijos en sufijos.

+ Escanee la cadena de entrada de izquierda a derecha, carácter por carácter.
+ Si el carácter es un operando, empújelo a la pila de salida.
+ Si el símbolo es una declaración y la pila de declaraciones está vacía, inserte la declaración en la pila de declaraciones.
+ Si la pila de operadores no está vacía, puede haber las siguientes posibilidades:
+ Si la precedencia del operador escaneado es mayor que el operador superior de la pila de operadores, inserte ese operador en la pila de operandos.
+ Si la precedencia del operador escaneado es menor o igual que el operador superior de la pila de operadores, extraiga los operadores de la pila de operandos hasta que encontremos un operador con una precedencia más baja que el carácter escaneado. Nunca aparezca ( '(' ) o ( ')' ), sea cual sea el nivel de prioridad del carácter escaneado.
+ Si un carácter abre un paréntesis ( '(' ), empújelo a la pila de sentencias.
+ Si un carácter cierra un paréntesis ( ')' ), extraiga sentencias de la pila de sentencias hasta que encontremos el paréntesis de apertura ( '(' ).
+ Ahora extraiga las declaraciones restantes de la pila de declaraciones y empújelas a la pila de salida.
