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

type node =
 | Node(int, node)
 | Empty;

let a = Node(5, Node(4, Empty));

let rec printSum = (n) => {
    switch(n){
    |   Node(b, c) => b + printSum(c);
    |   Empty => 0;
    }
}

Js.log(printSum(a));

Js.log(Math.add(1)(2));