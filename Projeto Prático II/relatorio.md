
# 1. Descrição dos Problemas
## Código 1 – Campo Minado (versão simplificada):
Desenvolver uma versão simplificada do jogo Campo Minado, onde o usuário entra com um campo 5x5 preenchido com minas (*) e espaços vazios. O sistema deve contar quantas minas existem ao redor de cada célula e exibir o campo com essa contagem. O objetivo é praticar o uso de matrizes, estrutura de controle e lógica de vizinhança.

## Código 2 – Controle de Caixa de Locadora de Carros:
Criar um sistema simplificado de controle de locações em uma locadora de carros. O programa deve registrar dados de aluguel (modelo, placa, valor diário e dias alugados), calcular o total pago, atualizar o caixa, e gerar um relatório incluindo os 10 carros mais alugados no dia.

# 2. Explicação do Funcionamento
## Código 1: 
### Campo Minado
O usuário insere um campo 5x5 com * para minas e qualquer outro caractere para espaços vazios.

O programa percorre o campo e calcula a quantidade de minas nas 8 posições vizinhas (norte, sul, leste, oeste e diagonais).

Exibe o resultado com * nas minas e o número de minas vizinhas nas outras posições.

## Código 2: 
### Locadora de Carros
O usuário informa o valor inicial do caixa e quantos carros deseja registrar.

Para cada carro, insere a placa, o modelo, o valor da diária e o número de dias.

O sistema calcula o valor recebido e atualiza o caixa.

Gera um relatório do dia com detalhes de cada aluguel.

Mostra os 10 modelos de carro mais alugados, com contagem de vezes.

# 3. Suposições
Para o campo minado, assume-se que a entrada será válida e terá exatamente 5 linhas e 5 colunas.

Para a locadora, assume-se que o pagamento é feito sempre no momento da locação, e que o número de locações não ultrapassa o limite de memória padrão.

# 4. Exemplos de Execução
## Campo Minado (Entrada):
* . . . .<br>
. . * . .<br>
. . . . .<br>
. * . . .<br>
. . . * .<br>
## Campo Minado (Saída esperada):
* 2 1 0 0<br>
2 2 * 1 0<br>
1 2 2 2 1<br>
1 * 2 3 2<br>
1 2 2 * 1<br>
( feito em 5x5 para facilitar a compreenção de quem estiver lendo o relatório).

  
## Locadora de Carros – Exemplo de Entrada:
Valor inicial do caixa: 1000<br>
Quantidade de carros: 3<br>
<br>
Carro 1:<br>
Placa: ABC1234<br>
Modelo: Uno<br>
Valor por dia: 50<br>
Dias: 2<br>
<br>
Carro 2:<br>
Placa: DEF5678<br>
Modelo: Uno<br>
Valor por dia: 50<br>
Dias: 3<br>
<br>
Carro 3:<br>
Placa: GHI9012<br>
Modelo: Civic<br>
Valor por dia: 100<br>
Dias: 1<br>

## Saída esperada:
Placa    Modelo   Valor/Dia   Dias   Valor Pago<br>
ABC1234  Uno      50          2      100<br>
DEF5678  Uno      50          3      150<br>
GHI9012  Civic    100         1      100<br>

Total recebido no dia: R$350<br>
Valor final no caixa: R$1350<br>



Top 10 carros mais alugados:
1. Modelo: Uno - Alugado 2 vez(es)
2. Modelo: Civic - Alugado 1 vez(es)

# 5. Dificuldades Encontradas
## Campo Minado:
### Erro comum:
esquecer de verificar os limites da matriz ao acessar vizinhos.

### Solução:
foi adicionado um teste de limites com if (Vx >= 0 && Vx < tam && Vy >= 0 && Vy < tam).

## Locadora:
Controle de caixa incorreto inicialmente (variável valorRecebido somando com ela mesma).
Corrigido com valorRecebido += valorPago;.

# 6. Aprendizados:
Uso de matrizes bidimensionais para simular lógicas espaciais (como vizinhança no campo minado).

Utilização de vetores, mapas, e ordenação para gerar relatórios mais completos.

Reforço na lógica de validação de entrada, estrutura de repetição e boas práticas de organização de código.


