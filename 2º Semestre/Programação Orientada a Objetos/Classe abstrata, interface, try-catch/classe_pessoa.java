abstract class Pessoa {
    private String nome;
    
    public abstract void fazerBarulho();
    
    public void setNome(String nome) {
        this.nome = nome;
    }
    
    public String getNome() {
        return nome;
    }
}

interface Veiculo {
    void ligar();
    void desligar();
}

class Humano extends Pessoa implements Veiculo {
    @Override
    public void fazerBarulho() {
        System.out.println("O Humano diz olá!");
    }
    
    @Override
    public void ligar() {
        System.out.println("O Humano está ligando o veículo.");
    }
    
    @Override
    public void desligar() {
        System.out.println("O Humano está desligando o veículo.");
    }
}

public class ExemploPessoas {
    public static void main(String[] args) {
        Humano Humano = new Humano();
        Humano.setNome("Marcio");
        System.out.println("Nome do Humano: " + Humano.getNome());
        Humano.fazerBarulho();
        
        try {
            Humano.ligar();
            Humano.desligar();
        } catch (Exception e) {
            System.out.println("Ocorreu um erro: " + e.getMessage());
        }
    }
}
