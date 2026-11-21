-- tabelas e regras
CREATE TABLE Pesquisa (
    id_pesquisa NUMBER,
    titulo VARCHAR2(100),
    descricao VARCHAR2(255),
    data_inicio DATE,
    data_fim DATE,
    status VARCHAR2(20),
    CONSTRAINT pk_pesquisa PRIMARY KEY (id_pesquisa)
);

CREATE TABLE Categoria (
    id_categoria NUMBER,
    nome_categoria VARCHAR2(50),
    CONSTRAINT pk_categoria PRIMARY KEY (id_categoria)
);

CREATE TABLE Questionario (
    id_questionario NUMBER,
    id_pesquisa NUMBER,
    id_categoria NUMBER,
    CONSTRAINT pk_questionario PRIMARY KEY (id_questionario),
    CONSTRAINT fk_questionario_pesquisa FOREIGN KEY (id_pesquisa)
        REFERENCES Pesquisa(id_pesquisa),
    CONSTRAINT fk_questionario_categoria FOREIGN KEY (id_categoria)
        REFERENCES Categoria(id_categoria)
);

CREATE TABLE Questao (
    id_questao NUMBER,
    id_questionario NUMBER,
    enunciado VARCHAR2(255),
    tipo_questao VARCHAR2(50),
    CONSTRAINT pk_questao PRIMARY KEY (id_questao),
    CONSTRAINT fk_questao_questionario FOREIGN KEY (id_questionario)
        REFERENCES Questionario(id_questionario)
);

CREATE TABLE Alternativa (
    id_alternativa NUMBER,
    id_questao NUMBER,
    texto_alternativa VARCHAR2(255),
    CONSTRAINT pk_alternativa PRIMARY KEY (id_alternativa),
    CONSTRAINT fk_alternativa_questao FOREIGN KEY (id_questao)
        REFERENCES Questao(id_questao)
);

CREATE TABLE Senha (
    id_senha NUMBER,
    id_categoria NUMBER,
    id_pesquisa NUMBER,
    codigo_senha VARCHAR2(20),
    status_utilizada NUMBER(1),
    CONSTRAINT pk_senha PRIMARY KEY (id_senha),
    CONSTRAINT fk_senha_categoria FOREIGN KEY (id_categoria)
        REFERENCES Categoria(id_categoria),
    CONSTRAINT fk_senha_pesquisa FOREIGN KEY (id_pesquisa)
        REFERENCES Pesquisa(id_pesquisa)
);

CREATE TABLE Resposta (
    id_resposta NUMBER,
    id_senha NUMBER,
    id_questao NUMBER,
    id_alternativa NUMBER,
    CONSTRAINT pk_resposta PRIMARY KEY (id_resposta),
    CONSTRAINT fk_resposta_senha FOREIGN KEY (id_senha)
        REFERENCES Senha(id_senha),
    CONSTRAINT fk_resposta_questao FOREIGN KEY (id_questao)
        REFERENCES Questao(id_questao),
    CONSTRAINT fk_resposta_alternativa FOREIGN KEY (id_alternativa)
        REFERENCES Alternativa(id_alternativa)
);

-- Povoamento
INSERT INTO Pesquisa (id_pesquisa, titulo, descricao, data_inicio, data_fim, status) VALUES (1, 'Avaliação Institucional 2026', 'Pesquisa de satisfação geral.', TO_DATE('2026-11-01', 'YYYY-MM-DD'), TO_DATE('2026-11-30', 'YYYY-MM-DD'), 'ATIVA');
INSERT INTO Pesquisa (id_pesquisa, titulo, descricao, data_inicio, data_fim, status) VALUES (2, 'Infraestrutura do Campus', 'Avaliação das salas e laboratórios.', TO_DATE('2026-10-01', 'YYYY-MM-DD'), TO_DATE('2026-10-31', 'YYYY-MM-DD'), 'INATIVA');
INSERT INTO Categoria (id_categoria, nome_categoria) VALUES (1, 'Alunos');
INSERT INTO Categoria (id_categoria, nome_categoria) VALUES (2, 'Professores');
INSERT INTO Categoria (id_categoria, nome_categoria) VALUES (3, 'Colaboradores');
INSERT INTO Questionario (id_questionario, id_pesquisa, id_categoria) VALUES (1, 1, 1);
INSERT INTO Questionario (id_questionario, id_pesquisa, id_categoria) VALUES (2, 1, 2);
INSERT INTO Questao (id_questao, id_questionario, enunciado, tipo_questao) VALUES (1, 1, 'Como você avalia a estrutura dos laboratórios?', 'Escala');
INSERT INTO Questao (id_questao, id_questionario, enunciado, tipo_questao) VALUES (2, 1, 'Os horários de atendimento da secretaria são adequados?', 'Múltipla escolha (uma resposta)');
INSERT INTO Questao (id_questao, id_questionario, enunciado, tipo_questao) VALUES (3, 2, 'Como você avalia o suporte da coordenação do curso?', 'Escala');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (1, 1, '1 - Muito Ruim');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (2, 1, '3 - Regular');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (3, 1, '5 - Excelente');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (4, 2, 'Sim');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (5, 2, 'Não');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (6, 3, '1 - Muito Ruim');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (7, 3, '3 - Regular');
INSERT INTO Alternativa (id_alternativa, id_questao, texto_alternativa) VALUES (8, 3, '5 - Excelente');
INSERT INTO Senha (id_senha, id_categoria, id_pesquisa, codigo_senha, status_utilizada) VALUES (1, 1, 1, 'ALU9876543', 1);
INSERT INTO Senha (id_senha, id_categoria, id_pesquisa, codigo_senha, status_utilizada) VALUES (2, 1, 1, 'ALU1234567', 1);
INSERT INTO Senha (id_senha, id_categoria, id_pesquisa, codigo_senha, status_utilizada) VALUES (3, 1, 1, 'ALU0000000', 0);
INSERT INTO Senha (id_senha, id_categoria, id_pesquisa, codigo_senha, status_utilizada) VALUES (4, 2, 1, 'PRF5555555', 1);
INSERT INTO Resposta (id_resposta, id_senha, id_questao, id_alternativa) VALUES (1, 1, 1, 3);
INSERT INTO Resposta (id_resposta, id_senha, id_questao, id_alternativa) VALUES (2, 1, 2, 4);
INSERT INTO Resposta (id_resposta, id_senha, id_questao, id_alternativa) VALUES (3, 2, 1, 2);
INSERT INTO Resposta (id_resposta, id_senha, id_questao, id_alternativa) VALUES (4, 2, 2, 5);
INSERT INTO Resposta (id_resposta, id_senha, id_questao, id_alternativa) VALUES (5, 4, 3, 8);
