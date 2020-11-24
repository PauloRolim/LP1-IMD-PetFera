# Estrutura

Estrutura das classes para melhor visualização do todo na construção do projeto.

[**Funcionário**](#funcionario)
  - [Veterinário](#veterinario)
  - [Tratador](#tratador)

[**Animal**](#animal)
  - [Anfíbio](#anfibio)
    - [Silvestre_nativo](#silvestre_nativo)
    - [Silvestre_exotico](#silvestre_exotico)
  - [Ave](#ave)
    - Silvestre_nativo
    - Silvestre_exotico
  - [Réptil](#reptil)
    - Silvestre_nativo
    - Silvestre_exotico
  - [Mamífero](#mamifero)
    - Silvestre_nativo
    - Silvestre_exotico

## Detalhamentos das classes
### Funcionário
  - id
  - nome
  - cpf
  - salario
  - animais -> vector de animal* para conseguir listar com facilidade. Verificar se compensa

#### Veterinário
  - numero_CRMV

#### Tratador
  - cor_uniforme

### Animal
  - id
  - classe
  - especie
  - nome
  - sexo
  - preco
  - bool perigoso
  - tratador_responcavel
  - vet_responcavel
  - enum tipo_de_alimentação ( herbivoro / onivoro / carnivoro ) // so uma ideia mas talvez seja melhor nem botar

### Silvestre_nativo
- permissão IBAMA_nativo

### Silvestre_exotico
- permissão IBAMA_exotico

### Anfíbio
  - enum tamanho_do_habitat (G / M / P)
  - enum tipo_do_habitat (aquatico / terestre com corpo de agua / terestre umido)

### Ave
  - enum tamanho_da_gaiola ( G / M / P)
  - bool ave_voadora

### Réptil
  - enum tamanho_do_habitat (G / M / P)
  - enum tipo_do_habitat ( arido / terestre umido / terestre com corpo de agua)
  - bool requer_luz_uv

### Mamífero
  - bool requer_gaila_ou_habitat // no caso de hamsters por exemplo
  - enum porte_do_mamifero ( G / M / P)
