# Roteiro

Os exercícios deste treinamento estão separados por passos. Cada passo contém seus objetivos e requisitos a serem seguidos. Qualquer dúvida, não hesite em contatar a(s) pessoa(s) autora(s) deste treinamento.

## Instalação C++ 

Para compilar e depurar códigos em C++ é necessário a instalação destas ferramentas. Cada sistema operacional tem suas especificidades, abaixo deixo referências para instalação das ferramentas de compilação para Ubuntu (Linux) e Windows.

### Windows

Instalar o [Visual Studio](https://visualstudio.microsoft.com/pt-br/thank-you-downloading-visual-studio/?sku=Community&rel=16&apptype=desktop&tech=cplusplus&os=windows). Após o download, instalar a ferramenta selecionando os recursos de C++. Deixarei uma referência que um membro do GER, o Heigon (/heigon77), fez que contém o passo a passo da instalação dos recursos pelo Visual Studio [aqui](https://drive.google.com/file/d/1uGa-67JU3qBHCGWbG-iN3LoBIogirS_X/view?usp=sharing).

Para uso do compilador `cl` e outras ferramentas como o `link`, basta abrir o Developer Command Prompt for VS2019.

### Ubuntu (Linux)

Para instalação no Ubuntu é preciso baixar ferramentas de build e o gcc apenas. No terminal digite:

```bash
sudo apt install build-essential gcc
```

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
cl /c /Zi /ZI /FS /std:c++17 main.cpp
cl /c /Zi /ZI /FS /std:c++17 robo.cpp
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


## Passo 3

### Objetivo

1. Entender classes abstratas
2. Entender métodos abtratos
3. Entender a diferença entre passagem por referência e por cópia
4. Entender o conceito de "interface" ou classes puramente abstratas

### Requisitos

* Criar a classe Humanoide herdando da classe Robo. A classe Humanoide deverá conter os métodos:

Método|Explicação
:-:|:-
Andar para frente|Método herdado da classe Robo
Parar de Andar|Método herdado da classe Robo
Mover o braço esquerdo|Método privado para movimentação do braço esquerdo
Mover o braco direito|Método privado para movimentação do braço esquerdo

Além dos atributos:

Atributo|Explicação
:-:|:-
Preco (4k)|Herdado de Robo
Nome (Humanoide)|Herdado de Robo
Lista de motores (10 ao todo)|Herdado de Robo

* Tornar a classe Robô abstrata. Os métodos andar e parar devem ser abstratos. O acesso aos atributos preço, nome e lista de motores devem ser modificados com visibilida à classe filha.
* Criar a classe puramente abstrata Validavel com objetivo de verificar se um objeto é válido. A validação ocorrerá ao compararmos o nome, preco e quantidade de motores de um Robo.
