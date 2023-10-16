// alert('oi sou o javaScript, estou esperando código!'); = COMANDO/FUNÇÃO 
// const = objeto
// nome de objeto = letra minuscula
// tofixed = float

//Objeto - declarado diretamente(objeto vazio)
const obj = {};

// Atributos dinamicamente
obj.nome = 'Bola';
obj.preço = 39.90;
obj.qtd = 10;

// Método
obj.total = function () {
    return obj.preço * obj.qtd;
}

// Método com arrow function
obj.showHTML = () => {
    let str = `<label>Nome:</label><label>${obj.nome}</label>`;
    str += `<label>Preço:</label><label>${obj.preço}</label>`;
    str += `<label>Quantidade:</label><label>${obj.qtd}</label>`;
    str += `<label>Total:</label><label>${obj.total().toFixed(2)}</label>`;

    return str;
}
// objeto com atributos e métodos(cheio)
//objeto2
const obj2 = {
    nome: 'Mesa de bilhar',
    preço: 359.99,
    qtd: 2,
    total: function () {
        return this.preço * this.qtd;
    },
    showHTML : function () {
        let str = `<label>Nome:</label><label>${this.nome}</label>`;
        str += `<label>Preço:</label><label>${this.preço}</label>`;
        str += `<label>Quantidade:</label><label>${this.qtd}</label>`;
        str += `<label>Total:</label><label>${this.total().toFixed(2)}</label>`;
  
        return str;
    }
}

//objeto3
const obj3 = {
    //atributos locais do objeto
    nome: 'Raquete',
    preço: 199.90,
    qtd: 3,
    //Método local do objeto
    total: function () {
        return this.preço * this.qtd;
    },
    showHTML :  function () {
        let str = `<label>Nome:</label><label>${this.nome}</label>`;
        str += `<label>Preço:</label><label>${this.preço}</label>`;
        str += `<label>Quantidade:</label><label>${this.qtd}</label>`;
        str += `<label>Total:</label><label>${this.total().toFixed(2)}</label>`;
        return str;

    }
}

//Saída no console

console.log(obj);
console.log('valor total = R$ ' + obj.total().toFixed(2));

console.log(obj2);
console.log('valor total = R$ ' + obj2.total().toFixed(2));

console.log(obj3);
console.log('valor total = R$ ' + obj3.total().toFixed(2));

// Saída no HTML

const main = document.getElementById('objetos');

const div = document.createElement('div');
div.innerHTML = obj.showHTML();
main.appendChild(div);

const div2 = document.createElement('div');
div2.innerHTML = obj2.showHTML();
main.appendChild(div2);

const div3 = document.createElement('div');
div3.innerHTML = obj3.showHTML();
main.appendChild(div3);




