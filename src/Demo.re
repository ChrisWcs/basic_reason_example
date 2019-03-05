let list = [ 1, 2, 3 ];

let newList = List.map((x) => x + 1, list);

List.iter((x) => Js.log(x), newList);