class decoracao {
    constructor(tipo) {
        this.tipo = tipo;
    }
}

class livro {
    constructor(titulo) {
        this.titulo = titulo;
    }
}


class estante {
    constructor() {
        this.decoracoes = []; 
        this.livros = []; 
    }

    
    addLivro(livro) {
        this.livros.push(livro)
    }

    
    addDecoracao(decoracao) {
        this.decoracoes.push(decoracao);
    }
}
let livro1 = new livro('Era uma vez 1');
let livro2 = new livro(' Era uma Vez 2');
let decoracao1 = new decoracao('cadeira');
let decoracao2 = new decoracao('mesa');

let minhaEstante = new estante();
console.table(minhaEstante);

minhaEstante.addLivro(livro1);
minhaEstante.addLivro(livro2);
minhaEstante.addDecoracao(decoracao1);
minhaEstante.addDecoracao(decoracao2);

console.table(minhaEstante);