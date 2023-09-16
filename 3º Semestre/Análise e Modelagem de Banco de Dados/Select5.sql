SELECT a.nome
FROM aluno a
INNER JOIN nota n ON a.chaluno = n.chaluno
WHERE (n.n1 + n.n2) / 2 < 6;