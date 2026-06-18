# Sistema de Arquivos em C

Projeto desenvolvido em linguagem C para simular o funcionamento básico de um sistema de arquivos hierárquico semelhante aos encontrados em sistemas operacionais.

O sistema permite criar, navegar, listar e remover diretórios e arquivos através de comandos inspirados em terminais Unix/Linux. O objetivo do projeto é aplicar conceitos de estruturas de dados, gerenciamento de memória e programação modular em C.

## Funcionalidades

- Criação de diretórios
- Criação de arquivos
- Navegação entre diretórios
- Listagem de conteúdo
- Remoção de arquivos e diretórios
- Exibição do caminho atual
- Estrutura hierárquica de pastas

## Estruturas de Dados Utilizadas

- Árvores para representar diretórios e subdiretórios
- Listas encadeadas para armazenar arquivos e filhos de cada diretório
- Ponteiros e alocação dinâmica de memória

## Tecnologias

- Linguagem C
- GCC
- Makefile

## Objetivos de Aprendizagem

- Manipulação avançada de ponteiros
- Estruturas de dados hierárquicas
- Recursão
- Gerenciamento manual de memória
- Organização de projetos em múltiplos arquivos (.c e .h)

## Exemplo de Comandos

mkdir documentos
cd documentos
touch trabalho.txt
ls
pwd
rm trabalho.txt
