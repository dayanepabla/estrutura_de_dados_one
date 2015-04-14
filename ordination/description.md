Exercícios sobre ordenação de Algoritmos e Estruturas de Dados 1
================================================================


## Descrição da atividade

1. Implementar {selecion, insertion, bubble, quick sort} sort com templates e ponteiro para função int compara( Obj, Obj).

2. Implementar função compara() com ponteiro de função; criar versões para gerar ordenação crescente e decrescente.

3. Testar os 3 algoritmos com os tipos: int, string, retângulo. No caso do retângulo devemos comparar suas áreas: ordem crescente (da menor área para a maior).

4. Comparar empíricamente os 3 algoritmos para o caso do retângulo.

5. Incluir na sua comparação o algoritmos std::qsort().

## Compilando

Execute o comando `make` para compilar o código-fonte do projeto em um arquivo executável chamado `sorting`.

```sh
$ make
```

## Como usar

Para rodar um dos algoritmos de ordenação, execute o programa `sorting` passando como paâmetro o nome do algoritmo que deseja. A sintaxe é a seguinte:

```sh
$ ./sorting
Usage: sorting <algorithm>
```

Os valores possíveis para `<algorithm>` são:

* selection
* bubble
* insertion
* quicksort
