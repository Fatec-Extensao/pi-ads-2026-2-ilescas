# Levamento de Riscos, Matriz de Risco e Mitigação

**Projeto Integrador:** Sistema Web para Gestão de Pesquisas por Questionário

---

## 1\. Identificação dos Riscos no Sistema

Abaixo estão listados os principais riscos identificados com base na arquitetura, atores e regras de negócio do sistema de pesquisas:

* **R1 \- Injeção de SQL (SQL Injection / SQLi):** Manipulação de campos de entrada (como senhas, cadastros de pesquisas, questões e respostas) para executar comandos não autorizados no banco de dados.  
* **R2 \- Injeção de Scripts (Cross-Site Scripting \- XSS):** Inserção de código malicioso nos campos de respostas abertas ou enunciados de pesquisas, podendo ser executado na tela do Gestor Educacional ao visualizar o Dashboard ou Relatórios.  
* **R3 \- Vazamento de Respostas e Quebra de Anonimato:** Associação indevida entre a senha anônima, dados de tráfego (como endereço IP ou horário de envio) e a resposta gravada no banco de dados, comprometendo a privacidade do participante.  
* **R4 \- Fraude de Preenchimento / Reuso de Senha:** Tentativas de reutilização de senhas já utilizadas, interceptação de senhas durante envio ou ataques de força bruta para adivinhar senhas válidas e preencher o questionário de forma indevida.  
* **R5 \- Acesso Não Autorizado e Elevação de Privilégios (BOLA / IDOR):** Participante (Aluno ou Professor) acessando diretamente rotas administrativas (como endpoints de relatórios, dashboards ou geração de senhas) por falta de validação no backend.  
* **R6 \- Indisponibilidade do Sistema (Ataques de Negação de Serviço \- DoS):** Múltiplas requisições simultâneas automatizadas nas rotas de validação de senha ou submissão de questionário, deixando a aplicação inacessível durante o período de aplicação da pesquisa.  
* **R7 \- Armazenamento Inseguro de Respostas Locais (Cache / LocalStorage):** Exposição de dados de respostas salvas temporariamente no navegador do usuário caso este abandone a máquina sem finalizar a pesquisa.  
* **R8 \- Vazamento de Lote de Senhas Exportado:** Acesso não autorizado aos arquivos exportados (PDF ou CSV) contendo as senhas anônimas geradas pelos Gestores Educacionais.

---

## 2\. Classificação dos Riscos (Matriz de Risco)

### Critérios de Avaliação

* **Probabilidade:**  
  * **Baixa (1):** Pouco provável de ocorrer.  
  * **Média (2):** Pode ocorrer em condições normais de uso.  
  * **Alta (3):** Grande chance de ocorrência sem controles adequados.  
* **Impacto:**  
  * **Baixo (1):** Consequências pequenas que não comprometem o sistema.  
  * **Médio (2):** Impacta funcionalidades parciais ou causa retrabalho.  
  * **Alto (3):** Compromete a segurança, o anonimato, a integridade do banco ou a disponibilidade do sistema.

**Nível de Risco** \= `Probabilidade × Impacto`

---

### Tabela da Matriz de Risco

| ID | Risco | Probabilidade | Impacto | Score | Nível de Risco |
| :---- | :---- | :---: | :---: | :---: | :---: |
| **R1** | Injeção de SQL (SQLi) | Média (2) | Alto (3) | **6** | **Crítico** |
| **R2** | Injeção de Scripts (XSS) | Média (2) | Médio (2) | **4** | **Médio** |
| **R3** | Vazamento de Respostas e Quebra de Anonimato | Média (2) | Alto (3) | **6** | **Crítico** |
| **R4** | Fraude de Preenchimento / Reuso de Senha | Alta (3) | Médio (2) | **6** | **Crítico** |
| **R5** | Acesso Não Autorizado / Elevação de Privilégios | Média (2) | Alto (3) | **6** | **Crítico** |
| **R6** | Indisponibilidade do Sistema (DoS) | Média (2) | Médio (2) | **4** | **Médio** |
| **R7** | Armazenamento Inseguro em Cache/LocalStorage | Alta (3) | Baixo (1) | **3** | **Médio** |
| **R8** | Vazamento de Lote de Senhas Exportado | Baixa (1) | Alto (3) | **3** | **Médio** |

---

## 3\. Medidas de Mitigação

Para cada risco identificado, são estabelecidas as seguintes ações técnicas e operacionais de mitigação:

### **Mitigação R1 (Injeção de SQL)**

* Utilização obrigatória de mapeamento objeto-relacional (ORM) ou consultas parametrizadas (*Prepared Statements*).  
* Sanitização e validação rigorosa de todos os dados recebidos nas requisições HTTP no backend.

### **Mitigação R2 (Injeção de Scripts \- XSS)**

* Aplicação de *escaping/encoding* de HTML em todas as respostas exibidas na interface administrativa.  
* Sanitização dos textos de respostas abertas utilizando bibliotecas apropriadas (ex: `DOMPurify`).

### **Mitigação R3 (Vazamento de Respostas e Quebra de Anonimato)**

* Desvinculação total no banco de dados entre a tabela de senhas e a tabela de respostas registradas.  
* Impedimento do registro de logs de IP ou metadados diretamente associados às respostas.  
* Utilização de criptografia no tráfego dos dados (HTTPS/TLS).

### **Mitigação R4 (Fraude de Preenchimento / Reuso de Senha)**

* Processamento da alteração do status da senha para `utilizada` e salvamento da resposta dentro de uma mesma **transação atômica** no banco de dados.  
* Manutenção do controle de bloqueio progressivo por tentativas incorretas (bloqueio temporário após 5 tentativas e permanente após 10).  
* Adição de limitação de taxa (*Rate Limiting*) no endpoint de validação de senhas.

### **Mitigação R5 (Acesso Não Autorizado / Elevação de Privilégios)**

* Implementação de controle de acesso baseado em funções (RBAC \- *Role-Based Access Control*).  
* Validação do Token JWT de autenticação em todas as rotas administrativas do backend (`/api/admin/*`).

### **Mitigação R6 (Indisponibilidade do Sistema \- DoS)**

* Configuração de *Rate Limiting* nas rotas críticas de aplicação de questionário e validação de senhas.  
* Uso dos recursos de proteção contra tráfego malicioso oferecidos pelas plataformas de hospedagem (Vercel / Netlify).

### **Mitigação R7 (Armazenamento Inseguro em Cache/LocalStorage)**

* Criptografia dos dados salvos no *cache/LocalStorage* do navegador.  
* Limpeza automática dos dados armazenados localmente imediatamente após a finalização da resposta ou expiração do tempo de sessão.

### **Mitigação R8 (Vazamento de Lote de Senhas Exportado)**

* Armazenamento das senhas no banco de dados utilizando algoritmos de *hash* seguro.  
* Restrição de acesso e geração de logs de auditoria sempre que um Gestor Educacional realizar o download/exportação de arquivos PDF ou CSV.