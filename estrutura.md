# Estrutura

Estrutura das classes para melhor visualização do todo na construção do projeto.

[**Funcionário**](#funcionario)
  - [Veterinário](#veterinario)
  - [Tratador](#tratador)

[**Animal**](#animal)
  - [Anfíbio](#anfibio)
    - [Silvestre](#silvestre)
      - [Nativo](#nativo)
      - [Exótico](#nativo)
  - [Ave](#ave)
    - Silvestre
      - Nativo
      - Exótico
  - [Réptil](#reptil)
    - Silvestre
      - Nativo
      - Exótico
  - [Mamífero](#mamifero)
    - Silvestre
      - Nativo
      - Exótico

## Detalhamentos das classes
### Funcionário
  - nome
  - cpf
  - salario
  - id_funcionario

#### Veterinário
  - crmv

#### Tratador
  - cor_uniforme

### Animal
  - classe
  - especie
  - sexo
  - preco
  - id_animal
  - perigoso(venenoso) / não perigoso(não venenoso)
  - tratador_responcavel
  - vet_responcavel
  - enum tipo_de_alimentação ( herbivoro / onivoro / carnivoro ) // so uma ideia mas talvez seja melhor nem botar

### Silvestre_nativo
- permição IBAMA

### Silvestre_exotico
- permição IBAMA

### Anfíbio
  - enum tamanho_do_habitat (G / M / P)
  - enum tipo_do_habitat (aquatico / terestre com corpo de agua / terestre umido)

### Ave
  - enum tamanho_da_gaiola ( G / M / P)
  - enum ave_voadora ( s / n )

### Réptil
  - enum tamanho_do_habitat (G / M / P)
  - enum tipo_do_habitat ( arido / terestre umido / terestre com corpo de agua)
  - enum requer_luz_uv ( s / n)
  

### Mamífero
  - enum requer_gaila_ou_habitat ( s / n ) // no caso de hamsters por exemplo
  - enum porte_do_mamifero ( G / M / P)
