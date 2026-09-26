# Trabalho Projeto Integrador

Integrantes:

Giovanni Vieira Pereira da Silva Gustavo Martins da Silva Ilescas Matheus Gabriel dos Santos Silva Alex Marola Barbosa Junior

Erick Gustavo Miiller Dos Santos

Sistema Web para Gestão de Pesquisas por Questionário

# Estudo de Caso

## Apresentação

O projeto tem como objetivo proporcionar aos estudantes uma experiência prática de desenvolvimento de software, envolvendo análise de requisitos, modelagem de dados, desenvolvimento de aplicações web, usabilidade, segurança da informação e geração de relatórios analíticos. O sistema a ser desenvolvido deverá permitir a criação, aplicação e análise de pesquisas institucionais, garantindo anonimato dos participantes e organização das respostas por categorias de respondentes.

## Objetivo do Projeto

Desenvolver	um	Sistema	Web	para	Gestão	de	Pesquisas	por questionários, permitindo:

Cadastro e gerenciamento de pesquisas

Definição de categorias de participantes

Criação de questionários específicos por categoria

Aplicação da pesquisa com acesso por senha anônima

Coleta e armazenamento das respostas

Monitoramento da participação

Geração de relatórios estatísticos

O sistema deverá permitir a realização de pesquisas institucionais de forma organizada, segura e anônima.

## Escopo do Sistema

O sistema deverá contemplar os seguintes módulos funcionais:

## Módulo de Cadastro de Pesquisa

### Responsável pela criação e configuração das pesquisas.

Funcionalidades mínimas:

### Cadastro de pesquisas

Definição de:

título da pesquisa

descrição

período de aplicação (data início e fim)

status (ativa/inativa)

### Cadastro de categorias de participantes

Exemplo de categorias:

Alunos

Professores

Colaboradores

Cada	pesquisa	poderá	possuir	uma	ou	mais	categorias	de participantes.

## Módulo de Questionários

Responsável pela criação das perguntas da pesquisa.

Funcionalidades:

Cadastro de questões

Associação das questões a uma categoria de participante

Cadastro de alternativas de resposta

Tipos de questões sugeridos:

Múltipla escolha (uma resposta)

Múltipla escolha (várias respostas)

Escala (ex: 1 a 5)

Resposta aberta (texto)

Cada categoria poderá possuir seu próprio questionário

## Módulo de Geração de Senhas

### O sistema deverá permitir a geração de senhas de acesso anônimas.

Características:

Senhas aleatórias

Associadas a uma categoria de participante

Não devem identificar o respondente

Cada senha deve permitir apenas uma resposta

Funcionalidades:

Gerar lote de senhas por categoria

Exportar senhas (PDF ou CSV)

Marcar senha como utilizada

## Módulo de Aplicação da Pesquisa (Coleta de Dados)

### Interface para os participantes responderem a pesquisa.

Fluxo de uso:

Usuário acessa o sistema

Digita a senha recebida

Sistema identifica a categoria

Exibe o questionário correspondente

Usuário responde as perguntas

Sistema grava as respostas no banco de dados

Senha é marcada como utilizada Requisitos:

Interface simples e responsiva

Validação de respostas obrigatórias

Impedir múltiplas respostas com a mesma senha

## Módulo de Gestão (Dashboard)

### Interface administrativa para acompanhamento da pesquisa.

Indicadores sugeridos:

Total de senhas geradas

Total de respostas recebidas

Taxa de participação

Participação por categoria

## Módulo de Relatórios

### O sistema deverá permitir a geração de relatórios analíticos.

Relatórios sugeridos:

Resultado por pergunta

Resultado por categoria

Comparação entre categorias

Exportação de resultados (PDF, CSV)

Visualização em tela com gráficos

# Requisitos Funcionais e Não Funcionais

## Requisitos Funcionais

O sistema deverá permitir:

Cadastrar pesquisas

Cadastrar categorias de participantes

Criar questionários por categoria

Cadastrar perguntas e alternativas

Gerar senhas anônimas

Aplicar questionários via senha

Registrar respostas no banco de dados

Impedir reutilização de senhas

Monitorar participação em tempo real

Gerar relatórios estatísticos

Definir limite de respostas por questão

Validação de formato (ex: texto mínimo/máximo)

Possibilidade de pausar/retomar pesquisas

Diferentes níveis de acesso

Login e autenticação de administradores

## Requisitos Não Funcionais

O sistema deverá atender aos seguintes requisitos:

Usabilidade

Interface web amigável

Layout responsivo

Segurança

Senhas criptografadas no banco

Validação de acesso

Proteção contra múltiplas respostas

Performance

Sistema capaz de suportar múltiplos acessos simultâneos

Portabilidade

Funcionamento em navegadores modernos

Aluno

# Atores do Sistema

Representa participantes da pesquisa pertencentes à categoria

“alunos”.

### Interações:

Acessar o sistema de pesquisa

Inserir senha anônima

Responder questionário

Enviar respostas

## Professor

Representa participantes da pesquisa pertencentes à categoria

“professores”.

### Interações:

Acessar o sistema de pesquisa

Inserir senha anônima

Responder questionário específico

Enviar respostas

## Gestor Educacional

Representa o usuário responsável pela gestão do sistema.

### Interações:

Realizar login no sistema

Cadastrar e gerenciar pesquisas

Cadastrar categorias de participantes

Criar e editar questionários

Cadastrar perguntas e alternativas

Gerar senhas anônimas

Monitorar participação (dashboard)

Visualizar estatísticas

Gerar relatórios

Exportar dados (PDF/CSV)

Ativar/desativar pesquisas

User Stories

Confidencialidade

AES

### Integridade

Senha – Somente números, caracteres e símbolos

### Disponibilidade

Vercel

Netlify

Wix

Autenticação

Senha numérica de 10 dígitos, sendo:

Gestores Educacionais: 5 números, 3 caracteres e 2 simbolos
Aluno: 7 números, 2 caracteres e 1 símbolo

Professor: 8 números, 1 carácter e 1 símbolo

Autorização

Gestores Educacionais: Acesso a toda interface das pesquisas, questionários, dados e relatórios.

Aluno: Acesso somente para responder questionário.

Professor: Acesso somente para responder questionário.



| Atores | Requisitos do sistema | O que espera que aconteça |
| :--- | :--- | :--- |
| Gestores educacionais | Manter pesquisas | Será possível criar pesquisas, informando o nome da pesquisa, uma descrição, um período de aplicação e seu status (ativa ou inativa). Também será possível editar essas informações e excluir pesquisas quando desejado. |
| Gestores educacionais | Manter questionários | O usuário poderá criar questionários, adicionando enunciados e respostas para as questões. Também será possível editar e excluir perguntas. |
| Gestores educacionais | Gerar senhas para o anonimato | Será possível gerar senhas de acesso aos questionários de acordo com suas respectivas categorias. |
| Gestores educacionais | Baixar senhas | Será possível baixar as senhas geradas. |
| Gestores educacionais | Criar Dashboard | O sistema criará um dashboard conforme as informações da pesquisa, apresentando o total de senhas geradas, o total de respostas recebidas, a taxa de participação e a participação por categoria. |
| Gestores educacionais | Criar relatórios das pesquisas | O sistema criará relatórios analíticos com base nos resultados das perguntas, resultados por categoria e comparações entre categorias, além de apresentar as informações em gráficos. |
| Gestores educacionais | Exportar os relatórios, gráficos e dashboards | O sistema permitirá que o usuário exporte os relatórios, gráficos e dashboards. |
| Alunos | Responder o questionário | O usuário informará a senha que lhe foi fornecida no campo de acesso. Após a validação da senha, o questionário será apresentado com as perguntas a serem respondidas. |
| Professores | Responder o questionário | O usuário informará a senha que lhe foi fornecida no campo de acesso. Após a validação da senha, o questionário será apresentado com as perguntas a serem respondidas. |
