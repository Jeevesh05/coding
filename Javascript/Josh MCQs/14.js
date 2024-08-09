function * generator(){
    yield 1;
    yield 2;
    yield 3;
}
var gen = generator();
console.log(gen.next().value);
console.log(gen.next().value);
console.log(gen.next().value);
console.log(gen.next().value);