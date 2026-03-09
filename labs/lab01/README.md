# Laboratório 01: Implementando classes (abstrações)

# Exercício 1: Classe Pessoa 👤

Este exercício foca nos conceitos de **Encapsulamento**, **Construtores** e **Regras de Negócio** básicas.

## 🎯 Objetivo
Criar uma classe para representar uma pessoa e garantir que seus dados sejam manipulados de forma segura através de métodos de acesso.

## 🛠️ Especificações Técnicas

### 1. Atributos (Privados)
- `nome`: Texto (String).
- `idade`: Inteiro (int).
- `altura`: Decimal (double).

### 2. Métodos Obrigatórios
| Método | Descrição |
| :--- | :--- |
| **Construtor** | Recebe e inicializa `nome`, `idade` e `altura`. |
| `Getters / Setters` | Métodos de acesso para todos os atributos. |
| `fazerAniversario()` | Incrementa a `idade` em 1 unidade. |
| `exibirDados()` | Imprime todos os atributos formatados no console. |

## ⚠️ Regras de Negócio
1. **Validação de Idade:** O método `setIdade()` não deve permitir valores menores que zero.
2. **Integridade:** O objeto deve ser criado obrigatoriamente com todos os dados preenchidos via construtor.

## 🧪 Roteiro de Teste
1. Instancie uma pessoa (Ex: "João", 25 anos, 1.75m).
2. Chame o método `exibirDados()`.
3. Utilize `fazerAniversario()` e verifique se a idade mudou.
4. Tente definir uma idade negativa via `setIdade()` e valide se o sistema bloqueou a alteração.


# Exercício 2: Sistema de Elevador 🛗

Este exercício foca em **Controle de Estado**, impedindo que um objeto assuma valores impossíveis na vida real.

## 🎯 Objetivo
Modelar o funcionamento de um elevador, controlando o fluxo de pessoas e o deslocamento entre andares com validações de segurança.

## 🛠️ Especificações Técnicas

### 1. Atributos (Privados)
- `andarAtual`: Andar onde o elevador está (0 = térreo).
- `totalAndares`: Capacidade máxima de andares do prédio (excluindo o térreo).
- `capacidade`: Limite máximo de pessoas.
- `qtdPessoas`: Quantidade atual de pessoas no interior.

### 2. Métodos de Operação
| Método | Regra de Segurança |
| :--- | :--- |
| `entrar()` | Só adiciona se `qtdPessoas < capacidade`. |
| `sair()` | Só remove se `qtdPessoas > 0`. |
| `subir()` | Só sobe se `andarAtual < totalAndares`. |
| `descer()` | Só desce se `andarAtual > 0`. |
| `status()` | Exibe o andar e a lotação atual (Ex: 5/10 pessoas). |

## ⚠️ Regras de Design (POO)
1. **Estado Inicial:** O construtor deve receber a `capacidade` e `totalAndares`. O elevador **sempre** começa no térreo (0) e vazio.
2. **Encapsulamento:** Não devem existir métodos *Setters* para `andarAtual` ou `qtdPessoas`. O estado só muda através dos métodos de operação.

## 🧪 Roteiro de Teste
1. Crie um elevador para 5 pessoas em um prédio de 10 andares.
2. Tente `descer()` estando no térreo (deve ser bloqueado).
3. Adicione 6 pessoas e verifique se o elevador barra a última entrada.
4. Suba até o último andar e tente `subir()` novamente.



# Exercício 3O: Sistema de Biblioteca 📚

Este exercício foca em **Encapsulamento**, **Estado de Objeto** e **Lógica de Validação**.

## 🎯 Objetivo
Implementar uma classe `Livro` que controle o progresso de leitura e o status de disponibilidade.

## 🛠️ Especificações Técnicas

### 1. Atributos (Privados)
- `titulo`: Nome do livro.
- `autor`: Nome do autor.
- `totalPaginas`: Quantidade total de páginas.
- `paginaAtual`: Página onde o leitor parou.
- `emprestado`: Status de disponibilidade (verdadeiro/falso).

### 2. Métodos Obrigatórios
| Método | Descrição |
| :--- | :--- |
| `emprestar()` | Muda o status para emprestado (se disponível). |
| `devolver()` | Torna o livro disponível e reseta o progresso. |
| `folhear(int qtd)` | Adiciona páginas à `paginaAtual` (limite no total). |
| `detalhes()` | Exibe todos os dados do livro e % de leitura. |

## ⚠️ Regras de Negócio
1. O método `folhear()` só deve funcionar se o livro estiver **emprestado**.
2. A `paginaAtual` nunca pode ser negativa ou maior que o `totalPaginas`.
3. O progresso deve ser calculado como: `(paginaAtual / totalPaginas) * 100`.

---
*Dica: Utilize o tipo `double` para o cálculo da porcentagem para evitar truncamento de inteiros.*

# Exercício 4: Simulador de Ar-Condicionado ❄️

Este exercício explora a implementação de **Lógica de Negócio**, **Constantes** e **Controle de Estado**.

## 🎯 Objetivo
Modelar um sistema de ar-condicionado que calcula a temperatura de um ambiente com base na potência selecionada e na temperatura externa.

## 🛠️ Especificações Técnicas

### 1. Atributos (Privados)
- `potencia`: Inteiro entre 0 (mínimo) e 10 (máximo).
- `ligado`: Booleano que indica se o aparelho está operando.

### 2. Comportamentos (Métodos)
| Método | Descrição |
| :--- | :--- |
| `ligar()` / `desligar()` | Altera o estado de energia do aparelho. |
| `setPotencia(int p)` | Define a potência, validando o intervalo [0 - 10]. |
| `getTemperatura(double externa)` | Retorna a temperatura resultante no ambiente. |

## ⚠️ Regras de Cálculo
1. Cada nível de potência reduz a temperatura em **1.8°C**.
2. Se o aparelho estiver **desligado**, a temperatura ambiente será idêntica à temperatura externa, independente da potência configurada.
3. A redução máxima permitida é de **18°C** (Potência 10).

## 🧪 Exemplo de Teste
1. **Ar A:** Potência 5, Temp. Externa 25°C → **Resultado esperado: 16.0°C**
2. **Ar B:** Potência 10, Temp. Externa 31°C → **Resultado esperado: 13.0°C**


# Exercício 5: Abstração de Veículo e Autonomia 🚗

Este exercício foca em **Lógica de Interdependência** e **Gestão de Recursos** dentro de um objeto.

## 🎯 Objetivo
Implementar um sistema que simule o consumo de combustível de um carro, respeitando limites físicos de armazenamento e autonomia.

## 🛠️ Especificações Técnicas

### 1. Atributos e Configurações
- `combustivelTanque`: Nível atual de gasolina.
- `distanciaTotal`: Quilometragem total acumulada.
- **Consumo:** O carro consome fixamente **1 litro a cada 15 km**.
- **Tanque:** Capacidade máxima de **50 litros**.

### 2. Comportamentos (Métodos)
| Método | Descrição |
| :--- | :--- |
| `abastecer(litros)` | Adiciona combustível respeitando o limite de 50L. |
| `mover(distancia)` | Reduz o combustível e aumenta a quilometragem se possível. |
| `getCombustivel()` | Retorna a quantidade de litros atual. |
| `getDistancia()` | Retorna o total percorrido (odômetro). |

## ⚠️ Regras de Validação
1. **Limite de Tanque:** Se o usuário tentar abastecer 60L em um tanque de 50L, o sistema deve ignorar o excesso.
2. **Autonomia:** O carro não pode "andar" mais do que o combustível permite. Se a distância solicitada for maior que a autonomia, o carro para onde o combustível acabar.
3. **Pane Seca:** Informe ao usuário caso o carro pare antes da distância solicitada por falta de gasolina.

## 🧪 Exemplo de Cálculo
- **Abastecer:** 10 litros.
- **Mover:** 150 km.
- **Resultado:** Combustível = 0L | Distância = 150 km.

