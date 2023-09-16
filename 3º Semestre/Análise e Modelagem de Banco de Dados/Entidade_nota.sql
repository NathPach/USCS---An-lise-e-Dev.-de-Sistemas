CREATE TABLE nota(
     chnota   int  IDENTITY(1,1) NOT NULL,
     chaluno   int  NULL,
     n1   decimal (10, 2) NULL,
     n2   decimal (10, 2) NULL,
     n3   decimal (10, 2) NULL
) 
GO

INSERT INTO nota (chaluno, n1,n2,n3)
SELECT 1, 10,2, 0 UNION
SELECT 2, 4,4,4    UNION
SELECT 3, 5, 5,8
GO
