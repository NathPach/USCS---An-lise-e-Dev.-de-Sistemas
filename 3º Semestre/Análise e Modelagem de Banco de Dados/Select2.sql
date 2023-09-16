SELECT 
	a.nome,
	n.n1,
	n.n2,
	CAST((n1+n2)/2 AS DECIMAL(10,2)) AS media
FROM aluno a
INNER JOIN nota n ON a.chaluno = n.chaluno
ORDER BY a.nome
