# Laboratório 01: Implementando classes (abstrações)

## Exercício 01

Crie uma classe **Pessoa** para representar uma pessoa, com os atributos 
privados de nome, idade e altura. Crie os métodos públicos necessários para 
acessar e modificar os atributos desta classe e crie um método para imprimir 
os dados da pessoa.

Implemente um programa de teste que utilize toda a interface da classe criada.

## Exercício 02

Crie uma classe denominada **Elevador** para armazenar as informações de um
elevador dentro de um prédio. A classe deve armazenar o andar atual (0 =
térreo), total de andares no prédio, excluindo o térreo, capacidade do elevador,
e quantas pessoas que estão presentes nele.

A classe deve implementar a seguinte interface:

- ***Construtor***: Deve receber como parâmetros: a capacidade do elevador e o
total de andares no prédio (os elevadores sempre começam no térreo e vazios);
**
- ***entra***: Acrescenta uma pessoa no elevador (só deve acrescentar se ainda
houver espaço);

- ***sai***: para remover uma pessoa do elevador (só deve remover se houver alguém
dentro dele);

- ***sobe***: para subir um andar (não deve subir se já estiver no último andar);
  
- ***desce***: para descer um andar (não deve descer se já estiver no térreo);
  
- ***Métodos de acesso aos atributos***: retorna o valor de cada atributo da
  classe. Crie um método para cada atributo

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

Esta classe deve possuir métodos **Privados** para:

- calcular a área do cı́rculo;
- calcular a distância entre os centros de 2 cı́rculos;
- calcular a circunferência do cı́rculo.

E métodos **Públicos** para:
- definir o raio do cı́rculo, dado um número real;
- aumentar o raio do cı́rculo, dado um percentual de aumento;
- definir o centro do cı́rculo, dada uma posição (X,Y);
- imprimir o valor do raio;
- imprimir o centro do cı́rculo.
- imprimir a área do cı́rculo.

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

Implemente ua abstração de umm carro. O tanque de combustı́vel do carro armazena
no máximo 50 litros de gasolina. O carro consome 15 km/litro. Deve ser
possı́vel:

- Abastecer o carro com uma certa quantidade de gasolina;
- Mover o carro em uma determinada distância (medida em km);
- Retornar a quantidade de combustı́vel e a distância total percorrida.

Elabore um programa para realizar o teste da sua abstração. Lembre-se de
realizar um teste completo da sua interface.

