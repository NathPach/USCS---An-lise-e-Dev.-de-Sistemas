public class Funcionario {
    public String nome;
    public int codFunc;
    public double salario;

    public Funcionario () {
       
    }
   
    public Funcionario(String nome, int codFunc, double salario) {
        this.nome = nome;
        this.codFunc = codFunc;
        this.salario = salario;
    }    

    public String getNome() {
        return nome;
    }

    public void setNome(String nome) {
        this.nome = nome;
    }

    public int getCodFunc() {
        return codFunc;
    }

    public void setCodFunc(int codFunc) {
        this.codFunc = codFunc;
    }

    public double getSalario() {
        return salario;
    }

    public void setSalario(double salario) {
        this.salario = salario;
    }  
}
