//document.getElementById('nome')
//document.querySelector('#nome') = preferencia para usar
// var nome = document.getElementById('nome').value
//  console.log(nome.value)
//--------------------------------------------------------------------------------//
// var nome = document.getElementById('nome')
// var resultado = document.getElementById('resultado')

// function buscarElemento(){
//    // let nome = document.getElementById('nome').value

//     resultado.innerHTML = nome.value
// }
function calculo() {
  let a = Number(document.getElementById("a").value);
  let b = Number(document.getElementById("b").value);
  let c = Number(document.getElementById("c").value);

  document.querySelector("#resultado").innerHTML = `O resultado seria:  ${(a + b) / c}`;
}
