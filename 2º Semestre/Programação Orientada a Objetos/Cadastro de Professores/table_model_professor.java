
package model;
import java.util.ArrayList;
import java.util.List;
import javax.swing.table.AbstractTableModel;
import model.Professor;

public class Professor_table_model extends AbstractTableModel {
    
    private List<Professor> dados = new ArrayList<>();
    private String[] colunas = {"Nome", "Telefone", "Endereço","Número","Complemento","Cidade","Curso","Disciplina","Período"};
    
    @Override
    public String getColumnName(int coluna) {
        return colunas[coluna];
    }

    
    @Override
    public int getRowCount() {
        return dados.size();
    }

    
    @Override
    public int getColumnCount() {
        return colunas.length;
    }

    
    @Override
    public Object getValueAt(int linha, int coluna) {
        switch (coluna) {
            case 0:
                return dados.get(linha).getNome();
            case 1:
                return dados.get(linha).getTelefone();
            case 2:
                return dados.get(linha).getEndereco();
            case 3:
                return dados.get(linha).getNumero();
            case 4:
                return dados.get(linha).getComplemento();
            case 5:
                return dados.get(linha).getCidade();
            case 6:
                return dados.get(linha).getCurso();
            case 7:
                return dados.get(linha).getDisciplina();
            case 8:
                return dados.get(linha).getPeriodo();
        }
        return null;
    }

    @Override
    public void setValueAt(Object valor, int linha, int coluna) {
        
        switch (coluna)
        {
            case 0:
                dados.get(linha).setNome((String) valor);
                break;
            case 1:
                dados.get(linha).setTelefone((String) valor);
                break;
            case 2:
                dados.get(linha).setEndereco((String) valor);
                break;
            case 3:
                dados.get(linha).setNumero((String) valor);
                break;
            case 4:
                dados.get(linha).setComplemento((String) valor);
                break;
            case 5:
                dados.get(linha).setCidade((String) valor);
                break;
            case 6:
                dados.get(linha).setCurso((String) valor);
                break;
            case 7:
                dados.get(linha).setDisciplina((String) valor);
                break;
            case 8:
                dados.get(linha).setPeriodo((String) valor);
                break;
        }
        this.fireTableRowsUpdated(linha, linha);  
    }

    public void adicionaLinha(Professor p) {
        this.dados.add(p);
        this.fireTableDataChanged();
    }

    public void removeLinha(int linha) {
        this.dados.remove(linha);
        this.fireTableRowsDeleted(linha, linha);
    }
    
    public Professor getDados (int linha){
        return dados.get(linha);
    }   
}
