SELECT
	a.nome
FROM aluno a
WHERE a.chaluno = (
	SELECT TOP 1 n.chaluno
	FROM nota n
	ORDER BY n.n1 DESC)