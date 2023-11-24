// Animal.java

public class Animal {
 private String nome;
 private String especie;

 public Animal(String nome, String especie) {
    this.nome = nome;
    this.especie = especie;
 }

 public String getNome() {
    return this.nome;
 }

 public String getEspecie() {
    return this.especie;
 }

 public void emitirSom() {
    System.out.println(this.nome + " faz som de " + this.especie + ".");
 }
}