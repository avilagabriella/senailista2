class animal {
    constructor(nome) {
        this.nome = nome;
    }
    emitirSom() {
        console.log(`${this.nome} está emitindo som`);
    }
}

class cachorro extends animal {
    constructor(nome, faro) {
        super(nome);
        this.faro;
    }
    emitirSom() {
        console.log(`${this.nome} faz au au`);
    }
    abanarRabo() {
        console.log(`${this.nome} está abanando o rabo`);
    }
}

class Gato extends animal {
    constructor(nome) {
        super(nome);
    }
}
emitirSom() {
    console.log(`${this.nome} faz miau`);
}

const cachorro1 = new cachorro(`Rex`, 90);
const cachorro2 = new cachorro(`Nei`, 30);
const gato = new gato(`mimi`);

cachorro1.emitirSom();
cachorro2.abanarRabo();
gato.emitirSom();