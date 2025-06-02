# EXERCÍCIO_01:
  ## Objetivo: 
  O código tem como finalidade simular o lançamento de dois dados e verificar, por meio de repetidas simulações, com que frequência ocorre o resultado (6, 6) — ou seja, quando ambos os dados caem com a face 6. A ideia é demonstrar, na prática, como a probabilidade teórica de 1/36 (~2,78%)-) se aproxima da realidade à medida que o número de experimentos aumenta.

### Descrição do Código:
Inclusão de bibliotecas:

iostream: permite a entrada e saída de dados no console.

cstdlib: usada para a função rand() que gera números aleatórios.

ctime: utilizada para a função time(0), que inicializa a semente da aleatoriedade com base no tempo atual, garantindo resultados diferentes a cada execução.

Inicialização do gerador de números aleatórios:

cpp
Copiar
Editar
srand(time(0));
Esta linha garante que a sequência de números aleatórios seja diferente a cada execução do programa.

Definição dos testes:

cpp
Copiar
Editar
int testes[] = {50, 100, 500, 1000, 10000, 100000, 1000000};
Esse vetor define a quantidade de lançamentos de dados que será feita em cada experimento, permitindo observar a aproximação dos resultados práticos com a         teoria conforme o número de experimentos aumenta.

Loop principal (para cada quantidade de lançamentos):
O programa percorre cada valor do vetor testes e realiza a simulação correspondente.

Simulação dos lançamentos:
Para cada repetição, dois números aleatórios de 1 a 6 são gerados, representando o resultado dos dois dados. Se ambos forem iguais a 6, incrementa-se o            contador contagem_6_6.

Cálculo da frequência do evento (6, 6):

cpp
Copiar
Editar
double frequencia = (double)contagem_6_6 / n * 100;
Essa fórmula calcula a frequência relativa (%) com que o evento desejado ocorreu.

Saída dos resultados:
O programa exibe, para cada quantidade de lançamentos:

O número total de lançamentos;

O número de vezes que saiu (6, 6);

A frequência percentual com que isso aconteceu.
# EXERCÍCIO_02: 
  ## Objetivo do Programa: 
  Este programa é um jogo interativo no qual o computador escolhe aleatoriamente um número entre 1 e 100, e o usuário tenta adivinhar qual é esse número. Após cada tentativa, o programa informa se o número escolhido pelo usuário é maior ou menor do que o número secreto. O jogo continua até que o usuário acerte o número, e ao final é perguntado se ele deseja jogar novamente.

  ### Descrição Técnica do Código:
Bibliotecas Utilizadas:

iostream: usada para entrada (cin) e saída (cout) de dados.

cstdlib: fornece a função rand() para gerar números aleatórios.

ctime: usada para inicializar a semente do gerador de números aleatórios com base no tempo atual.

Inicialização da Aleatoriedade:

cpp
Copiar
Editar
srand(time(0));
Esta linha garante que o número aleatório seja diferente a cada execução, usando o relógio do sistema como semente.

Variáveis:

num: armazena o número digitado pelo usuário.

escolha: determina se o usuário quer continuar jogando (0 para sim, 1 para não).

tentativa: conta quantas tentativas o usuário fez até acertar.

Lógica Principal:

O programa entra em um laço do-while que representa o jogo principal.

Dentro dele, um número aleatório entre 1 e 100 é gerado com:

cpp
Copiar
Editar
int aleatorio = rand() % 100 + 1;
Um segundo laço do-while é usado para permitir que o usuário continue tentando até acertar o número.

A cada tentativa:

Se o palpite for maior que o número, é exibida a mensagem de que o número aleatório é menor.

Se for menor, a mensagem diz que o número aleatório é maior.

A variável tentativa é incrementada a cada palpite.

Após Acertar:

O programa informa em quantas tentativas o número foi acertado.

Em seguida, pergunta ao usuário se ele deseja jogar novamente (0 = sim, 1 = não).

Tratamento de Entrada Inválida:

Caso o usuário digite algo diferente de 0 ou 1 na pergunta final, o programa exibe “Número inválido” e termina a execução com break.
#EXERCÍCIO_03: ##Objetivo do Programa: Este programa simula uma eleição entre alunos para escolher:

Um representante da turma (mais votado),

Um vice-representante (segundo mais votado).

A ideia é registrar os votos digitados por n alunos, contabilizá-los e ao final informar os dois alunos com maior número de votos.

Descrição Técnica do Código:
Inclusão de bibliotecas:

include <iostream>: permite entrada e saída de dados no console.

include <vector>: usada para criar um vetor dinâmico que armazenará a contagem de votos.

Entrada do número de alunos:

cpp
Copiar
Editar
int n; 
cout << "Digite o número de alunos: ";
cin >> n;
O usuário informa quantos alunos participarão da eleição.

Inicialização da estrutura de votos:

cpp
Copiar
Editar
vector<int> votos(n + 1, 0);
Um vetor é criado com n + 1 posições (índice 0 é ignorado) para contar quantos votos cada aluno recebeu. A posição i representa o aluno i.

Entrada dos votos:
Um laço for lê os votos dos n alunos:

Se o voto estiver no intervalo válido (1 a n), ele é contado.

Caso contrário, o voto é considerado inválido e ignorado.

Identificação do mais votado e segundo mais votado:

São usadas quatro variáveis:

representante: guarda o índice do aluno com mais votos.

vice: guarda o índice do segundo mais votado.

maxVotos: número de votos do mais votado.

segundoMaxVotos: número de votos do segundo mais votado.

O algoritmo percorre o vetor de votos e, com base nas quantidades, atualiza os valores corretamente para definir o representante e o vice.

Saída dos resultados:
O programa informa no final:

Quem será o representante e quantos votos ele teve.

Quem será o vice-representante e sua quantidade de votos.

Exemplo de Execução Simulada:
java
Copiar
Editar
Digite o número de alunos: 5
Digite os 5 votos dos alunos (números de 1 a 5):
2
3
2
5
3

Representante da turma será o aluno 2, que obteve 2 votos.
Vice-representante será o aluno 3, que obteve 2 votos.
Pontos Importantes:
O código trata votos inválidos com uma mensagem, sem causar falhas.

Em caso de empate, o primeiro a atingir a maior quantidade de votos é considerado o vencedor.

O uso de vector torna o código mais flexível e seguro do que arrays tradicionais.

 Objetivo do Programa:
Este programa realiza uma simulação de eleição entre alunos, onde:

Cada aluno vota em outro aluno como representante;

O sistema contabiliza os votos e determina:

O representante da turma (aluno mais votado),

O vice-representante (segundo mais votado).

🧾 Funcionamento do Código:
Inclusão de Bibliotecas:

cpp
Copiar
Editar
#include <iostream>
#include <vector>
iostream: entrada e saída de dados.

vector: estrutura de dados dinâmica para armazenar os votos.

Entrada de Dados:

O usuário informa quantos alunos (n) participam.

cpp
Copiar
Editar
cin >> n;
Inicialização da Tabela de Votos:

cpp
Copiar
Editar
vector<int> votos(n + 1, 0);
Um vetor de tamanho n + 1 é criado, onde:

A posição i armazena a quantidade de votos recebidos pelo aluno i.

A posição 0 não é usada (por isso n + 1).

Entrada dos Votos:

Cada aluno digita o número do candidato em quem vota.

Se o voto for válido (entre 1 e n), ele é contabilizado.

Votos inválidos são ignorados com mensagem de aviso.

Contagem e Determinação dos Eleitos:

Variáveis:

representante: armazena o número do mais votado.

vice: armazena o número do segundo mais votado.

maxVotos e segundoMaxVotos: armazenam as maiores quantidades de votos.

O programa percorre o vetor votos para identificar os dois alunos mais votados.

Exibição dos Resultados:

cpp
Copiar
Editar
cout << "Representante da turma será o aluno " << representante
     << ", que obteve " << maxVotos << " votos." << endl;
cout << "Vice-representante será o aluno " << vice
     << ", que obteve " << segundoMaxVotos << " votos." << endl;
📌 Exemplo de Execução:
java
Copiar
Editar
Digite o número de alunos: 5
Digite os 5 votos dos alunos (números de 1 a 5):
2
3
2
5
3

Representante da turma será o aluno 2, que obteve 2 votos.
Vice-representante será o aluno 3, que obteve 2 votos.

# EXRECÍCIO_03:
## Objetivo do Programa:
Este programa realiza uma simulação de eleição entre alunos, onde:

Cada aluno vota em outro aluno como representante;

O sistema contabiliza os votos e determina:

O representante da turma (aluno mais votado),

O vice-representante (segundo mais votado).

🧾 Funcionamento do Código:
Inclusão de Bibliotecas:

cpp
Copiar
Editar
iostream
vector
iostream: entrada e saída de dados.

vector: estrutura de dados dinâmica para armazenar os votos.

Entrada de Dados:

O usuário informa quantos alunos (n) participam.

cpp
Copiar
Editar
cin >> n;
Inicialização da Tabela de Votos:

cpp
Copiar
Editar
vector<int> votos(n + 1, 0);
Um vetor de tamanho n + 1 é criado, onde:

A posição i armazena a quantidade de votos recebidos pelo aluno i.

A posição 0 não é usada (por isso n + 1).

Entrada dos Votos:

Cada aluno digita o número do candidato em quem vota.

Se o voto for válido (entre 1 e n), ele é contabilizado.

Votos inválidos são ignorados com mensagem de aviso.

Contagem e Determinação dos Eleitos:

Variáveis:

representante: armazena o número do mais votado.

vice: armazena o número do segundo mais votado.

maxVotos e segundoMaxVotos: armazenam as maiores quantidades de votos.

O programa percorre o vetor votos para identificar os dois alunos mais votados.

Exibição dos Resultados:

cpp
Copiar
Editar
cout << "Representante da turma será o aluno " << representante
     << ", que obteve " << maxVotos << " votos." << endl;
cout << "Vice-representante será o aluno " << vice
     << ", que obteve " << segundoMaxVotos << " votos." << endl;
📌 Exemplo de Execução:
java
Copiar
Editar
Digite o número de alunos: 5
Digite os 5 votos dos alunos (números de 1 a 5):
2
3
2
5
3

Representante da turma será o aluno 2, que obteve 2 votos.
Vice-representante será o aluno 3, que obteve 2 votos.


# EXERCÍCIO_04: 
  ## Objetivo do Programa: 
  Este programa simula um diário escolar simples, permitindo:

  Entrada de nomes e notas de até 50 alunos,
  
  Cálculo do total de pontos obtidos em 5 provas,
  
  Determinação automática da situação do aluno:
  
  Aprovado (nota total ≥ 60),
  
  Recuperação (entre 40 e 59),
  
  Reprovado (nota total < 40),
  
  Exibição organizada dos resultados.
  
  Descrição Técnica do Código:
  Inclusão de Bibliotecas:
  
 iostream: entrada/saída de dados.
  
 string: manipulação de nomes dos alunos.
  
  include <omanip: formatação da saída com setw().
  
  Definições Iniciais:
  
  MAX_ALUNOS = 50: número máximo de alunos permitidos.
  
  NUM_PROVAS = 5: número fixo de provas por aluno.
  
  Arrays:
  
  nomes[]: armazena o nome de cada aluno.
  
  notas[][]: armazena as 5 notas de cada aluno.
  
  somas[]: guarda a soma das notas de cada aluno.
  
  Entrada do Número de Alunos:
  
  O usuário informa quantos alunos estão na turma.
  
  Se o valor for inválido (≤ 0 ou > 50), o programa exibe erro e encerra.
  
  Entrada dos Nomes:
  
  O programa solicita os nomes dos alunos com getline() para permitir espaços.
  
  Entrada das Notas:
  
  Para cada aluno, o programa pede 5 notas.
  
  A soma dessas notas é armazenada no vetor somas[i].
  
  Cálculo e Impressão dos Resultados:
  
  Com base na nota total de cada aluno:
  
  Se ≥ 60: "Aprovado".
  
  Se < 40: "Reprovado".
  
  Entre 40 e 59: "Recuperação".
  
  A tabela é formatada com alinhamento usando setw() e left.
  
  Exemplo de Execução Simulada:
  csharp
  Copiar
  Editar
  Quantos alunos tem a turma? 2
  Escreva os nomes dos alunos (1 por linha):
  Ana Clara
  Lucas Silva
  Escreva as notas do aluno Ana Clara: 10 15 12 10 14
  Escreva as notas do aluno Lucas Silva: 5 7 8 6 5
  
  === Diário da Turma ===
  Nome           Nota Total  Situacao
  -------------------------------
  Ana Clara      61          Aprovado
  Lucas Silva    31          Reprovado
