SELECT 
	a.nome,
	n.n1,
	n.n2
FROM aluno a
INNER JOIN nota n ON a.chaluno = n.chaluno
ORDER BY a.nome