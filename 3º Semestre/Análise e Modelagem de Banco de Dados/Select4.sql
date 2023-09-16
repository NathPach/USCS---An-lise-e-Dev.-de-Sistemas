SELECT TOP 1 a.nome
FROM aluno a
INNER JOIN nota n ON a.chaluno = n.chaluno
ORDER BY (n.n1 + n.n2) / 2 ASC;
