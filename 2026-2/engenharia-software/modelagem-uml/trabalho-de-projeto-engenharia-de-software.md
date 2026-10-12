# Trabalho de Projeto - Engenharia de Software
## Sistema Web para Gestão de Pesquisas por Questionário

**Integrantes:**
* Giovanni Vieira Pereira da Silva
* Gustavo Martins da Silva Ilescas
* Matheus Gabriel dos Santos Silva
* Alex Marola Barbosa Junior
* Erick Gustavo Miller Dos Santos
* Wagner Alves de Sousa
* Gabriel Gonçalves Pereira

---

## Estudo de Caso

### Apresentação
O projeto tem como objetivo proporcionar aos estudantes uma experiência prática de desenvolvimento de software, envolvendo análise de requisitos, modelagem de dados, desenvolvimento de aplicações web, usabilidade, segurança da informação e geração de relatórios analíticos. O sistema a ser desenvolvido deverá permitir a criação, aplicação e análise de pesquisas institucionais, garantindo anonimato dos participantes e organização das respostas por categorias de respondentes.

### Objetivo do Projeto
Desenvolver um **Sistema Web para Gestão de Pesquisas por Questionários**, permitindo:
* Cadastro e gerenciamento de pesquisas
* Definição de categorias de participantes
* Criação de questionários específicos por categoria
* Aplicação da pesquisa com acesso por senha anônima
* Coleta e armazenamento das respostas
* Monitoramento da participação
* Geração de relatórios estatísticos

O sistema deverá permitir a realização de pesquisas institucionais de forma organizada, segura e anônima.

---

## Escopo do Sistema
O sistema deverá contemplar os seguintes módulos funcionais:

### 1. Módulo de Cadastro de Pesquisa
Responsável pela criação e configuração das pesquisas.
* **Funcionalidades mínimas:**
  * Cadastro de pesquisas
  * Definição de:
    * Título da pesquisa
    * Descrição
    * Período de aplicação (data início e fim)
    * Status (ativa/inativa)
  * Cadastro de categorias de participantes (Exemplo: Alunos, Professores, Colaboradores).
  * Cada pesquisa poderá possuir uma ou mais categorias de participantes.

### 2. Módulo de Questionários
Responsável pela criação das perguntas da pesquisa.
* **Funcionalidades:**
  * Cadastro de questões
  * Associação das questões a uma categoria de participante
  * Cadastro de alternativas de resposta
* **Tipos de questões sugeridos:**
  * Múltipla escolha (uma resposta)
  * Múltipla escolha (várias respostas)
  * Escala (ex: 1 a 5)
  * Resposta aberta (texto)
  * Cada categoria poderá possuir seu próprio questionário.

### 3. Módulo de Geração de Senhas
O sistema deverá permitir a geração de senhas de acesso anônimas.
* **Características:**
  * Senhas aleatórias
  * Associadas a uma categoria de participante
  * Não devem identificar o respondente
  * Cada senha deve permitir apenas uma resposta
* **Funcionalidades:**
  * Gerar lote de senhas por categoria
  * Exportar senhas (PDF ou CSV)
  * Marcar senha como utilizada

### 4. Módulo de Aplicação da Pesquisa (Coleta de Dados)
Interface para os participantes responderem a pesquisa.
* **Fluxo de uso:**
  1. Usuário acessa o sistema
  2. Digita a senha recebida
  3. Sistema identifica a categoria
  4. Exibe o questionário correspondente
  5. Usuário responde as perguntas
  6. Sistema grava as respostas no banco de dados
  7. Senha é marcada como utilizada
* **Requisitos:**
  * Interface simples e responsiva
  * Validação de respostas obrigatórias
  * Impedir múltiplas respostas com a mesma senha

### 5. Módulo de Gestão (Dashboard)
Interface administrativa para acompanhamento da pesquisa.
* **Indicadores sugeridos:**
  * Total de senhas geradas
  * Total de respostas recebidas
  * Taxa de participação
  * Participação por categoria

### 6. Módulo de Relatórios
O sistema deverá permitir a geração de relatórios analíticos.
* **Relatórios sugeridos:**
  * Resultado por pergunta
  * Resultado por categoria
  * Comparação entre categorias
  * Exportação de resultados (PDF, CSV)
  * Visualização em tela com gráficos

---

## Requisitos Funcionais e Não Funcionais

### Requisitos Funcionais
O sistema deverá permitir:
* Cadastrar pesquisas
* Cadastrar categorias de participantes
* Criar questionários por categoria
* Cadastrar perguntas e alternativas
* Gerar senhas anônimas
* Aplicar questionários via senha
* Registrar respostas no banco de dados
* Impedir reutilização de senhas
* Monitorar participação em tempo real
* Gerar relatórios estatísticos
* Definir limite de respostas por questão
* Validação de formato (ex: texto mínimo/máximo)
* Possibilidade de pausar/retomar pesquisas
* Diferentes níveis de acesso
* Login e autenticação de administradores

### Requisitos Não Funcionais
O sistema deverá atender aos seguintes requisitos:
* **Usabilidade:**
  * Interface web amigável
  * Layout responsivo
* **Segurança:**
  * Senhas criptografadas no banco
  * Validação de acesso
  * Proteção contra múltiplas respostas
* **Performance:**
  * Sistema capaz de suportar múltiplos acessos simultâneos
* **Portabilidade:**
  * Funcionamento em navegadores modernos

---

## Atores do Sistema

* **Aluno**
  * *Representa participantes da pesquisa pertencentes à categoria “alunos”.*
  * **Interações:** Acessar o sistema de pesquisa, inserir senha anônima, responder questionário, enviar respostas.
* **Professor**
  * *Representa participantes da pesquisa pertencentes à categoria “professores”.*
  * **Interações:** Acessar o sistema de pesquisa, inserir senha anônima, responder questionário específico, enviar respostas.
* **Gestor Educacional**
  * *Representa o usuário responsável pela gestão do sistema.*
  * **Interações:** Realizar login no sistema, cadastrar e gerenciar pesquisas, cadastrar categorias de participantes, criar e editar questionários, cadastrar perguntas e alternativas, gerar senhas anônimas, monitorar participação (dashboard), visualizar estatísticas, gerar relatórios, exportar dados (PDF/CSV), ativar/desativar pesquisas.

---

## User Stories

| Atores | Requisitos do sistema | O que espera que acontece |
| :--- | :--- | :--- |
| **Gestores educacionais** | Manter pesquisas | Vai ser possível criar as pesquisas, colando o nome da pesquisa, uma descrição para a pesquisa, um período de aplicação para a pesquisa e por fim, seu status, se ela está ativa ou inativa. Poderá editar essas informações e também excluir caso desejado, tanto a pesquisas quanto informações. |
| **Gestores educacionais** | Manter questionários | Aqui o usuário vai criar o questionário, vai colocar enunciados e respostas para as questões do questionário. Será possível editar perguntas e excluir também. |
| **Gestores educacionais** | Gerar senhas para o anonimato | Vai ser possível gerar senhas de acesso aos questionários por suas respectivas categorias. |
| **Gestores educacionais** | Baixar senhas | Vai ser possível baixar essas senhas. |
| **Gestores educacionais** | Criar Dashboard | O sistema vai criar um dashboard conforme as informações da pesquisa: Qual o total de senhas geradas, o total de respostas recebidas, a taxa de participação e a participação por categoria. |
| **Gestores educacionais** | Criar Relatórios das pesquisas | O sistema criará relatórios analíticos com base nos resultados por perguntas, resultado por categoria, comparação entre categoria e visualizar em gráficos as informações também. |
| **Gestores educacionais** | Exportar os relatórios, gráficos e dashboards | Vai permitir que o usuário exporte esses dados. |
| **Alunos** | Responder o Questionário | O usuário vai colocar a senha que lhe foi passada no campo de senhas, assim aparecerá o questionário com as perguntas a serem respondidas. |
| **Professores** | Responder o Questionário | O usuário vai colocar a senha que lhe foi passada no campo de senhas, assim aparecerá o questionário com as perguntas a serem respondidas. |

---

## Modelagem UML e Casos de Uso

### 1. Gerenciar Pesquisas
*(Diagrama UML: Gestor Educacional estende Criar, Editar, Excluir)*
![Diagrama Gerenciar Pesquisas](2026-2\engenharia-software\modelagem-uml\uml-manter-pesquisas.png)

* **FP1: Criar Pesquisa**
  1. Abre formulário para criar pesquisa.
  2. Opção para selecionar para qual grupo é a pesquisa aparece:
     * 2.1 Opção 1 “Alunos”
     * 2.2 Opção 2 “Professores”
     * 2.3 Opção 3 “Alunos e Professores”
  3. Gestor seleciona a opção.
  4. O Gestor preenche o nome, descrição e o período de aplicação da pesquisa.
  5. Campo Status aparece. Se o período de aplicação for igual ao dia em que a pesquisa está sendo criada, o sistema automaticamente deixa o status da pesquisa como “ATIVA”.
  6. O Gestor clica em "Finalizar Cadastro Pesquisa".
  7. O sistema valida os dados inseridos (nome, descrição e consistência das datas).
  8. Sistema salva a pesquisa e exibe uma notificação no canto superior direito: “Pesquisa Cadastrada no Sistema”.

* **FA1: Status Inativo (Alternativo ao FP1 - Passo 6)**
  * Se o período de aplicação for diferente do dia em que a pesquisa está sendo criada, o sistema automaticamente deixa o status da pesquisa como “INATIVA”.
  * O fluxo retorna para a etapa 7 do FP1.

* **FP2: Editar Pesquisa**
  1. Sistema exibe uma tela com todas as pesquisas cadastradas.
  2. Gestor seleciona uma pesquisa.
  3. Sistema retorna os dados do formulário referente à pesquisa.
  4. Gestor faz as alterações.
  5. Gestor seleciona o botão “concluir”.
  6. Sistema valida as informações inseridas.
  7. Sistema salva no banco de dados.
  8. Sistema retorna a seguinte mensagem: “Pesquisa editada com êxito”.

* **FA2: Cancelar Editar (Alternativo ao FP2)**
  * Inicia no passo 4 do FP2. Gestor desiste de fazer alteração e aperta no botão “Cancelar”.
  * Sistema descarta toda alteração que foi feita e retorna para a etapa anterior.

* **FP3: Excluir Pesquisa**
  1. Gestor solicita a exclusão da pesquisa.
  2. O sistema exibe uma lista com as pesquisas cadastradas.
  3. Gestor seleciona a pesquisa que deseja remover.
  4. O sistema exibe os dados da pesquisa em modo leitura e exibe o botão “Excluir Pesquisa”.
  5. O sistema exibe uma mensagem de confirmação: “Deseja excluir essa Pesquisa?” com as opções “Confirmar” e “Sair”.
  6. Gestor aperta em “Confirmar”.
  7. O sistema deleta a pesquisa com todas as questões cadastradas no banco de dados.

* **FA3: Cancelar Exclusão da Pesquisa (Alternativo ao FP3)**
  * Gestor aperta em “Cancelar”.
  * Sistema não faz nenhuma exclusão no banco de dados e retorna para a etapa 2 do FP3.

---

### 2. Gerar senhas para o anonimato
*(Diagrama UML: Gestor Educacional inclui Módulo de Relatório e Módulo de Dashboard)*
![Diagrama Gerar Senhas](pi-ads-2026-2-ilescas\2026-2\engenharia-software\modelagem-uml\uml-gerar-senhas-para-o-anonimato.png)

* **FP1: Geração de Senhas**
  1. O Gestor Educacional realiza o login no sistema.
  2. O Gestor acessa o Módulo de Geração de Senhas.
  3. O Gestor seleciona uma pesquisa previamente cadastrada e ativa.
  4. O Gestor seleciona a categoria de participantes desejada (ex: Alunos, Professores).
  5. O Gestor informa a quantidade de senhas que deseja gerar (geração em lote).
  6. O sistema processa a requisição e gera as senhas aleatórias.
  7. O sistema associa as senhas à categoria escolhida e as configura para uso único.
  8. O sistema salva as senhas no banco de dados com o status inicial de "não utilizada".
  9. O sistema atualiza a base de dados do Módulo de Gestão (Dashboard), somando a nova quantidade ao indicador de "Total de senhas geradas" daquela pesquisa.
  10. O sistema registra o universo amostral para aquela categoria específica, estabelecendo a base matemática que o Módulo de Relatórios usará futuramente para calcular a "Taxa de participação" e a "Participação por categoria".
  11. O sistema exibe uma mensagem de sucesso na tela para o Gestor e disponibiliza os botões para exportação (PDF/CSV).

* **FA1: Exportação imediata das senhas**
  * Após o passo 11 do fluxo principal, o Gestor decide baixar o lote gerado selecionando o formato desejado (PDF ou CSV). O sistema compila as senhas e inicia o download.

* **FA2: Bloqueio por ausência de questionário**
  * No passo 4 do fluxo principal, se o Gestor selecionar uma categoria que ainda não possui perguntas cadastradas, o sistema interrompe o fluxo e exibe um alerta. Nenhuma alteração é feita no banco de dados.

* **FA3: Validação de quantidade (Erro de Input)**
  * No passo 5 do fluxo principal, se o Gestor inserir um valor inválido (zero, negativo ou texto), o sistema impede a geração e solicita um número válido.

---

### 3. Responder Questionários
*(Diagrama UML: Gestores educacionais, Professores, Alunos acessam a pesquisa, com extensão para Armazenar pesquisa)*
![Diagrama Responder Questionários](pi-ads-2026-2-ilescas\2026-2\engenharia-software\modelagem-uml\uml-responder-questionários.png)

* **FP1: Acesso à pesquisa**
  1. Sistema carrega o app na interface padrão.
  2. Interface solicita senha para acessar a pesquisa.
  3. Ator insere a senha.
  4. Sistema valida a senha.
  5. Sistema identifica o ator.
  6. Sistema exibe o questionário.
  7. Ator responde às perguntas.
  8. Sistema solicita ao ator validar respostas e salvar resposta.
  9. Ator seleciona “Salvar respostas”.
  10. Sistema armazena as respostas no banco de dados.
  11. Sistema marca senha como utilizada.
  12. Sistema finaliza a pesquisa.
  13. Sistema exibe mensagem: “Obrigado por participar!”.
  14. Sistema exibe caixa de texto para reiniciar a pesquisa.
  15. Sistema retorna à etapa 1.

* **FA1: Ator insere senha inválida ou incorreta**
  * Caso a senha digitada esteja incorreta ou no formato inválido, o sistema exibirá a mensagem “A senha digitada não confere”, contabilizará uma tentativa não sucedida e retornará à etapa 2.

* **FA2: Ator insere senha incorreta diversas vezes**
  * Caso o sistema contabilize 5 tentativas incorretas, se tornará temporariamente indisponível por 5 minutos. Se chegar a 10 tentativas, o sistema bloqueia permanentemente a caixa de texto e exibe a mensagem “Tentativas de acesso excedidas”.

* **FA3 / FA4: Saída antecipada ou não finalização**
  * Caso o usuário saia da pesquisa antes de concluir, o sistema salvará localmente as respostas em cache para retomar de onde parou ao acessar novamente.

---

### 4. Criar Dashboard
*(Diagrama UML: Gestores educacionais realizam login e acessam o Dashboard)*
![Diagrama Criar Dashboard](pi-ads-2026-2-ilescas\2026-2\engenharia-software\modelagem-uml\uml-criar-dashboard.png)

* **FP1: Dashboard**
  1. O Gestor Educacional realiza login no sistema.
  2. O sistema valida as credenciais de acesso.
  3. O sistema exibe o Dashboard Administrativo.
  4. O Gestor seleciona os filtros desejados: Pesquisa, Categoria, Período, Status.
  5. O sistema processa os filtros informados.
  6. O sistema calcula e exibe os indicadores principais (KPIs): Total de Pesquisas, Senhas Geradas, Respostas Recebidas, Taxa de Participação, Pesquisas Ativas, Pesquisas Encerradas.
  7. O sistema exibe os gráficos de Participação por Categoria, Utilização das Senhas, Evolução das Respostas e Status das Pesquisas.
  8. O sistema exibe os Resultados das Perguntas, Comparação entre Categorias e Comentários das Questões Abertas.
  9. O sistema exibe os Indicadores de Segurança: Total de Logins Administrativos, Tentativas de Acesso Inválidas, Senhas Reutilizadas Bloqueadas e Usuários Ativos.
  10. O Gestor analisa as informações apresentadas e pode solicitar a geração de relatórios.

* **Fluxos Alternativos e de Exceção (Dashboard):**
  * **FA01:** Alterar Filtros (recarrega gráficos e indicadores).
  * **FA02:** Atualização Automática em tempo real.
  * **FA03:** Visualizar Detalhes ao selecionar um gráfico.
  * **FE01 / FE02 / FE03:** Tratamento para nenhum dado encontrado, erro ao carregar indicadores ou falha na exportação.

---

## Requisitos de Segurança e Arquitetura

* **Confidencialidade:** AES (Advanced Encryption Standard).
* **Integridade:** Validação de senhas baseada em números, caracteres e símbolos.
* **Disponibilidade (Hospedagem sugerida):** Vercel, Netlify, Wix.
* **Autenticação (Regras de senha por perfil):**
  * **Gestores Educacionais:** Senha numérica de 10 dígitos, sendo 5 números, 3 caracteres e 2 símbolos.
  * **Alunos:** Senha numérica de 10 dígitos, sendo 7 números, 2 caracteres e 1 símbolo.
  * **Professores:** Senha numérica de 10 dígitos, sendo 8 números, 1 caractere e 1 símbolo.
* **Autorização:**
  * **Gestores Educacionais:** Acesso a toda a interface das pesquisas, questionários, dados e relatórios.
  * **Aluno / Professor:** Acesso restrito exclusivamente para responder ao questionário.