class Paciente{
    constructor(nome, peso, altura, IMC){
        this.nome = nome;
        this.peso = peso;
        this.altura= altura;
    }
    imc(){
        return this.peso / (this.altura * this.altura);
    }
    diagnosticar(){
        if(this.imc() < 18.5){
            return "Baixo peso";
        }else if(this.imc() <= 24.5){
            return "Peso normal";
        }else if(this.imc() <= 29.9){
            return "Sobrepeso";
        }else if(this.imc() <= 34.9){
            return "Obesidade grau 1";
        }else if(this.imc() <=39.9){
            return "Obesidade grau 2";
        }else{
            return "Obesidade grau 3";
        }
    }

    showHTML(){
        let str = `<label>Nome:</label><label>${this.nome}</label>`;
        str += `<label>Peso:</label><label>${this.peso}</label>`;
        str += `<label>Altura:</label><label>${this.altura}</label>`;
        str += `<label>IMC:</label><label>${this.imc()}</label>`;
        return str;
    }
}

const imc1 = new Paciente('André Mattos',80,1.8);
const imc2 = new Paciente('João da Silva',100,1.7);
const imc3 = new Paciente('Maria de souza',60,1.65); 
const imc4 = new Paciente('José de Oliveira',90,1.75); 
const imc5 = new Paciente('Silvia Andrade',60,1.85); 
const imc6 = new Paciente('Sueli Oliveira',44,1.65); 
const imc7 = new Paciente('Pedro de Souza',110,1.85); 


const main = document.getElementById('Panciente');

const div1 = document.createElement('div');
const div2 = document.createElement('div');
const div3 = document.createElement('div');
const div4 = document.createElement('div');
const div5 = document.createElement('div');
const div6 = document.createElement('div');
const div7 = document.createElement('div');

div1.innerHTML = imc1.showHTML();
div2.innerHTML = imc2.showHTML();
div3.innerHTML = imc3.showHTML();
div4.innerHTML = imc4.showHTML();
div5.innerHTML = imc5.showHTML();
div6.innerHTML = imc6.showHTML();
div7.innerHTML = imc7.showHTML();


main.appendChild(div1);
main.appendChild(div2);
main.appendChild(div3);
main.appendChild(div4);
main.appendChild(div5);
main.appendChild(div6);
main.appendChild(div7);