// Algoritimo da fuinha descrito em The Blind Watchmaker
// Classe Principal Weasel
public class Weasel {
    public static void main(String[] args) {
  
      // Passando argumentos
      for(String arg: args) {
        arg = arg.toUpperCase();
  
        if( arg.matches("^[0-9]+$") ) {
          NEW_WEASELS = Integer.parseInt(arg);
        } else if( arg.matches("^[0]*.[0-9]+$") ) {
          MUTATION_RATE = Double.parseDouble(arg);
        } else if( arg.matches("^[" + GENES + "]+$") ) {
          TARGET = arg;
        } else {
          System.out.println("Argumento [" + arg + "] não é válido");
        }
      }
  
      // Executando método principal
      runWeasel();
  
      // Fim da iteração
    }
  
    // String Alvo a ser formada
    public static String TARGET = "METHINKS IT IS LIKE A WEASEL";
  
    // Caracteres aceitos para formar a String Alvo
    public static String GENES = "ABCDEFGHIJKLMNOPQRSTUVWXYZ ";
  
    // A chance de um gene virar outro
    public static double MUTATION_RATE = 0.08;
  
    // Numero de Filhos gerados por um Pai
    public static int NEW_WEASELS = 30;
  
    
    // Método principal do programa
    public static void runWeasel() {
      System.out.println("Starting...\n");
  
      WParent theParent = new WParent( TARGET.length() );
      WParent[] offspring = new WParent[NEW_WEASELS];
      int generations = 1;
      int bestAccuracy = theParent.accuracy();
  
      System.out.println("geração: maior acurácia: genoma mais acurado");
      System.out.println(generations + " : " + bestAccuracy + " : " + theParent.getGenome() );
  
      // Cria uma nova geração até alcançar a String Alvo
      while( bestAccuracy < TARGET.length() ) {
        generations++;
  
        // Cria um novos Pais/Filhos para essa geração
        for(int i=0; i<NEW_WEASELS; i++) {
          offspring[i] = new WParent( theParent.getGenome() );
        }
  
        // Verifica qual o melhor resultado da geração para gerar filhos
        theParent = offspring[0]; // Index Pai/Filho de partido
        bestAccuracy = offspring[0].accuracy(); // Index de Acurácia de Partida
        for(int i=1; i<NEW_WEASELS; i++) {
          if( offspring[i].accuracy() > bestAccuracy ) {
            theParent = offspring[i];
            bestAccuracy = offspring[i].accuracy();
          }
        }
  
        // Imprimindo resultado da geração
        System.out.println(generations + " : " + bestAccuracy + " : " + theParent.getGenome() );
      }
  
      System.out.println("\nA fuinha foi gerada em " + generations + " Gerações.");
    }
  }
  
  // Classe WParent
  class WParent {
    // O genoma deste Pai/Filho
    private String genome = "";
  
    // Gera genes aleatórios ao genoma na construção
    WParent(int genomeLength) {
      for(int i=0; i<genomeLength; i++) {
        genome += randomGene();
      }
    }
  
    // Aplica mutações paras proximas gerações encima dos genes do Pai
    WParent(String parentGenome) {
      // Verifica se os genes irão mutar
      for(int i=0; i<parentGenome.length(); i++) {
        if( Weasel.MUTATION_RATE >= Math.random() ) {
          // Ocorre uma mutação. Chamando novo gene.
          genome += randomGene();
        } else {
          // Gene inalterado. Atribuindo o gene de WParent.
          genome += parentGenome.charAt(i);
        }
      }
    }
  
    public String getGenome() { return genome; }
  
    // Retorna o quão alta é a acurácia do genoma de WParent
    public int accuracy() {
      // Atribuindo acurácia ao genoma de WParent para cada gene correto
      int accuracyScore = 0;
      for(int i=0; i<Weasel.TARGET.length(); i++) {
        if( Weasel.TARGET.charAt(i) == genome.charAt(i) ) {
          accuracyScore++;
        }
      }
  
      return accuracyScore;
    }
  
    // retorna o char de um gene em GENES a partir de um index aleatório
    public static char randomGene() {
      int randIdx = (int)Math.floor( Math.random() * Weasel.GENES.length() );
      return Weasel.GENES.charAt( randIdx );
    }
  }
  