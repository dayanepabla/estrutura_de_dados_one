Tarefa #1: Classe LLSeq
=======================


1. Implementar a classe LLSeq descrita por meio de seu arquivo llseq.h.

2.  Implementar as classes LLSeqReg e LLSeqOrd que extendem a classe LLSeq por meio de herança.
A classe LLSeqReg armazena seus elementos em uma ordem qualquer no vetor interno. A classe LLSeqOrd
matem seus elementos ordenados.

3. Modificar as classes da versão 2 de maneira a suportar templates. A partir desta modificação
o cliente poderá passar o tipo da Chave e o tipo da Informação a ser armazenada na lista.
Lembro que o método buscaAux deve sempre retornar o índice do elemento procurado OU o índice
da posição onde o elemento procurado deveria estar para ajudar no processo de inserção.
No caso da lista ordenada LLSeqOrd você deve imlementar a buscaAux como uma busca binária
*modificada*  de maneira que tal busca retorna o índice do elemento procurado ou o índice da
posição onde o item procurado deveria estar. Isso deve ser feito em O(log n)!

Tarefa #2: Classe AbsStack
==========================

Nesta tarefa você deve implementar uma classe StackAr que extende a classe AbsStack (a qual
funcional como uma interface).
Este exercício foi feito em sala de aula, envolvendo o uso de um vetor com alocação dinâmica,
o qual dobra sempre que a pilha atinge seu limite usando a função doublearray.
O que resta fazer é:

1. Testar os métodos para garantir o funcionamento correto da classe.

2. Fazer um programa que usa a classe StackAr para validar string constituída apenas de
parênteses. O programa deve verificar se a expressão possui parênteses que casam de maneira
correta.
Exemplos de parênteses corretos: (())()()((()))
Errado: )( ou  ))(( ou (() ou ))), etc.

3. Procure implementar a classe StackVec que no lugar de usar um vetor regular, utiliza a
classe std::vector para armazenar os elementos da pilha. Este é um bom exercício para se
acostumar com o uso da classe std::vector.
O arquivo enviado com a tarefa corresponde a implementação da classe StackAr feita em sala de
aula.

Tarefa #3: Classe AbsQueue
==========================

Sua tarefa consiste em implementar a classe QueueAr que concretiza a interface definida em
AbsQueue.
Para implementar a fila, utilize o armazenamento por vetor regular, alocado dinamicamnete
no construtor e que cresce conforme a necessidade por meio de chamadas aa DoubleArray().
Faça também um programa de teste, driver_queue.cpp, para testar completamente a classe criada,
em várias situações.
