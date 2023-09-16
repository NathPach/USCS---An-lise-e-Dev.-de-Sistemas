CREATE TABLE aluno (
     chaluno   int  IDENTITY(1,1) NOT NULL,
     nome   varchar (50) NOT NULL,
     cidade varchar(50) NOT NULL
) 
GO

INSERT INTO aluno (nome, cidade)
SELECT 'ANA','SANTO ANDRE' UNION 
SELECT 'Jose','SAO CAETANO' UNION 
SELECT 'Bete','SANTO ANDRE'
GO
