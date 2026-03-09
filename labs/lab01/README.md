# Laboratório 01: Implementando classes (abstrações)

## Exercício 01: Classe Pessoa e Encapsulamento

Crie uma classe chamada Pessoa para representar o cadastro de um indivíduo, seguindo os pilares da Programação Orientada a Objetos.

1. Estrutura da Classe
   - Atributos Privados: nome (String), idade (int) e altura (double).
 
   - Construtor: Implemente um construtor que inicialize todos os atributos no momento da criação do objeto.
 
   - Métodos de Acesso (Getters/Setters): Crie métodos para todos os atributos.
  
      **Regra de Negócio:** No método setIdade(), adicione uma validação para que o atributo só seja alterado se o valor for maior ou igual a idade atual.

2. Comportamentos (Métodos)
   - fazerAniversario(): Um método que não recebe parâmetros e, quando chamado, incrementa a idade da pessoa em 1 ano.
 
   - exibirDados(): Um método que imprima no console todas as informações da pessoa (Nome, Idade e Altura) de forma formatada.

3. Programa de Teste
  
    Implemente uma classe Principal com o método main para realizar as seguintes ações:

      - Instanciar um objeto Pessoa.
 
      - Exibir os dados iniciais utilizando o método exibirDados().
 
      - Utilizar o método fazerAniversario().
 
      - Tentar alterar a idade para um valor inválido (ex: -5) e verificar se a validação funcionou.
 
      - Exibir os dados atualizados para confirmar as mudanças.


## Exercício 02: Sistema de Controle de Elevador

Crie uma classe chamada Elevador que gerencie o estado e o movimento de um elevador de forma segura.

1. Estrutura e Estado Inicial

  - Atributos Privados: 
    - andarAtual (int)
    - totalAndares (int - desconsiderando o térreo)
    - capacidade (int)
    - qtdPessoas (int)

  - Construtor: Deve receber a capacidade do elevador e o totalAndares do prédio.
  
        Regra: Todo elevador deve obrigatoriamente iniciar no térreo (0) e vazio (0).

2. Interface de Operação (Métodos)
   
Implemente a lógica de segurança para cada operação:

  - entrar(): Adiciona uma pessoa.
  
        Condição: Só é permitido se a qtdPessoas for menor que a capacidade. Caso contrário, exiba uma mensagem de "Elevador Lotado".

  - sair(): Remove uma pessoa.

        Condição: Só é permitido se qtdPessoas for maior que 0.

  - subir(): Move o elevador para o próximo andar.

        Condição: Não pode subir se já estiver no último andar.

  - descer(): Move o elevador para o andar anterior.

        Condição: Não pode descer se já estiver no térreo (0).

  - status(): Método que imprime a situação atual (Ex: "Andar: 2 | Pessoas: 3/10").

3. Métodos de Acesso (Getters)

    Implemente métodos para retornar os valores de cada atributo. **Atenção:** Não crie métodos Setters para andarAtual ou qtdPessoas, pois esses valores só devem ser alterados pelos métodos de operação (entrar, subir, etc.), garantindo a integridade dos dados.

4. Programa de Teste
  
    Crie uma classe SimuladorElevador para validar a lógica:

     1. Instancie um elevador para 5 pessoas em um prédio de 10 andares.

     2. Tente subir quando estiver no último andar para testar o limite.

     3. Tente remover pessoas de um elevador vazio.

     4. Encha o elevador até a capacidade máxima e tente adicionar mais uma pessoa.


## Exercício 03

Crie uma classe em C++ chamada **Relogio** para armazenar um horário, composto
por hora, minuto e segundo. A classe deve representar esses componentes de
horário e deve apresentar os métodos descritos a seguir:

- um método chamado ***setHorario***, que deve receber o horário desejado por
parâmetro (hora, minuto e segundo);

- um método chamado ***getHorario*** para retornar o horário atual, através de 3
variáveis passadas por referência;

- um método chamado ***tick*** para avançar o horário para o próximo segundo (lembre-se de
atualizar o minuto e a hora, quando for o caso).


## Exercício 04

Definir uma classe que abstraia um círculo

Esta classe deve possuir métodos **privados** para:

- calcular a área do cı́rculo;
- calcular a distância entre os centros de 2 cı́rculos;
- calcular a circunferência do cı́rculo.

E métodos **públicos** para:
- definir o raio do cı́rculo, dado um número real;
- aumentar o raio do cı́rculo, dado um percentual de aumento;
- definir o centro do cı́rculo, dada uma posição (X,Y);
- imprimir o valor do raio;
- imprimir o centro do cı́rculo;
- imprimir a área do cı́rculo;
- imprimir a distância de um outro círculo (parâmetro);

Criar um programa principal para testar a classe.

## Exercício 05

Implemente uma classe para abstrair uma televisão. A televisão tem um controle
de volume do som e um controle de seleção de canal.

A classe implementada deve atender aos seguintes requisitos mínimos:

- O controle de volume permite aumentar ou diminuir a potência do volume de som
em uma unidade de cada vez.

- A potência do volume deve ter valores discretos no intervalo [0 , 100].

- O controle de canal também permite aumentar e diminuir o número do canal em
uma unidade

- A interface também deve possibilitar a trocar para um canal indicado.

- 0s canais dever ter valores discretos no intervalo [0 , 75].

- Também devem existir métodos para consultar o valor do volume de som e o canal
selecionado.

Caso julgar necessário, adicione na interface desta abstração, outros
comportamentos que julgar necessários

Elabore um programa para realizar o teste da sua abstração. Lembre-se de
realizar um teste completo da sua interface.

## Exercício 06

Implemente a abstração de um equipamento de ar condicionado, com os seguintes
requisitos:

- O condicionador possui 10 potências diferentes.  
- Cada unidade da potência do condicionador diminui a temperatura do ambiente em
  1.8° C.
- A variação que o condicionador consegue causar está no intervalo [0° C - 18°
  C], ou seja, zero graus de variação quando desligado e dezoito graus de
  variação quando ligado na potência máxima.
- Através de um sensor, o condicionador é informado da temperatura externa. Dada
  essa temperatura e a potência selecionada, o condicionador calcula e retorna a
  temperatura do ambiente.

No programa principal, crie dois condicionadores. Informe duas temperaturas
externas diferentes para cada um (ex: 25° C e 31° C), ajuste o segundo em
potência máxima (10) e o primeiro em potência média (5). Finalmente, exiba a
temperatura resultante de cada ambiente.

## Exercício 07

Implemente uma abstração de um carro. O tanque de combustı́vel do carro armazena
no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser
possı́vel:

- Abastecer o carro com uma certa quantidade de gasolina;
- Mover o carro em uma determinada distância (medida em km);
- Retornar a quantidade de combustı́vel e a distância total percorrida.

Elabore um programa para realizar o teste da sua abstração. Lembre-se de
realizar um teste completo da sua interface e considerar possíveis inconsistências
de estado (ex. um carro não pode percorrer uma certa distância se ele não
possuir combustível suficiente para isto).