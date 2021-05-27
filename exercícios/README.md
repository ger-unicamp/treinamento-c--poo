# Roteiro

## Passo 1

### Objetivo

Entender a estrutura de um código básico em C++, compilar as unidades de tradução (arquivos .cpp) e "linkar" os objetos compilados em um arquivo executável final.

### Requisitos

Compilação no Linux

```bash
g++ -c -g -std=c++17 main.cpp
g++ -c -g -std=c++17 robo.cpp
g++ -o robo main.o robo.o
```

Compilação no Windows (Visual Studio Tools)

```powershell
cl /c /Zi /ZI /std:c++17 main.cpp
cl /c /Zi /ZI /std:c++17 robo.cpp
link /DEBUG /OUT:"robo.exe" main.obj robo.obj
```

## Passo 2

### Objetivo

1. Entender o que são funções amigas
2. Entender diretiva `#pragma once`
3. Entender sobrecarga de métodos (overload)
4. Entender a diferença entre inicializar um objeto por parâmetro ou referência
5. Entender métodos constantes

### Requisitos

* A classe robô deverá ter uma lista de motores.
* Para cumprir o requisito 1, deverá ser criada a classe `Motor`
* A classe motor deverá conter os seguintes atributos:

Atributo|Explicação
|:-:|:-|
conectado|Indica se o motor está conectado ao robô
velocidade de rotacao|Indica qual a velocidade que o motor atinge configurada em graus por milissegundos
ativo|Indica se o motor está girando

* A classe motor deverá conter os seguintes métodos (pode haver ter mais métodos):

Método|Explicação
:-:|:-
conectar|Atribui `true` ao atributo `conectado`
desconectar|Atribui `false` ao atributo `conectado`
rodar com velocidade de rotacao X|Atribui uma nova velocidade de rotação ao motor e atribui `true` ao atributo `ativo`
rodar por T milissegundos|Atribui `true` ao atributo `ativo` e, após T milissegundos, atribui `false`
rodar por G graus|Atribui `true` ao atributo `ativo` e, após G graus rotacionado, atribui `false`
parar rotacao|Atribui `false` ao atributo `ativo`