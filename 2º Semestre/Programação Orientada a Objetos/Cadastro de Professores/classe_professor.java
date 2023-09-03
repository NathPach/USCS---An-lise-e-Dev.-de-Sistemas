package model;

 
public class Professor {
   
    
    private String nome;
    private String telefone;
    private String endereco;
    private String numero;
    private String complemento;
    private String cidade;
    private String curso;
    private String disciplina;
    private String periodo;
    
    public String getNome(){
    return nome;
    }
    
    public void setNome(String nome){
    this.nome = nome;   
    }
    
    public String getTelefone(){
    return telefone;
    }
    
    public void setTelefone(String telefone){
    this.telefone = telefone;   
    }    

    public String getEndereco(){
    return endereco;
    }
    
    public void setEndereco(String endereco){
    this.endereco = endereco;
    }
    
    public String getComplemento(){
    return complemento;
    }

    public void setComplemento(String complemento) {
    this.complemento = complemento;
    }

    public String getNumero() {
    return numero;
    }

    public void setNumero(String numero) {
    this.numero = numero;
    }

    public String getCidade() {
    return cidade;
    }

    public void setCidade(String cidade) {
    this.cidade = cidade;
    }
 
    public String getCurso() {
    return curso;
    }

    public void setCurso(String curso) {
    this.curso = curso;
    }

    public String getDisciplina() {
        return disciplina;
    }

    public void setDisciplina(String disciplina) {
    this.disciplina = disciplina;
    }

    public String getPeriodo() {
    return periodo;
    }

    public void setPeriodo(String periodo) {
    this.periodo = periodo;
    }    
    
}
