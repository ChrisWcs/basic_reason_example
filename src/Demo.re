let rec factorial = (x) => {
    x == 0 ? 1 : x * factorial(x - 1)
}

Js.log(factorial(5));