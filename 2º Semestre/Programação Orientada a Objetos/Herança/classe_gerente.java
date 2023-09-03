public class Gerente extends Funcionario {

    public double bonus;

    public Gerente(double bonus, String nome, int codFunc, double salario) {
        super(nome, codFunc, salario);
        this.bonus = bonus;
    }
   
    @Override
    public double getSalario() {

        return (super.getSalario() + this.bonus);

    }
}
