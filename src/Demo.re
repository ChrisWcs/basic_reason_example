let rec factorial = (x) => {
    x == 0 ? 1 : x * factorial(x - 1)
}

Js.log(factorial(5));

let count : int = 1;

Js.log( count + 1 );

type hello = {
    msg: string,
    lang: string,
};

let hola : hello = {
    msg: "Hola, que tal",
    lang: "Espanol",
};

let hola2 : hello = {
    ...hola,
    msg: "Hola, como estas?",
}

Js.log(hola.msg);
Js.log(hola2.msg);