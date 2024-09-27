/*
== (loose equality)checks for value equality after performing type conversion.
===  is the strict equality operator in JavaScript.
 It checks both the value and the type of the operands
*/

let var1 = {}
let var2 = {}
let var3 = var1;
//console.log(var1 == var3)

let str1 = ''
let str2 = ''
//console.log(str1 == str2)

let num = 1
let numS = '01'
//console.log(num == numS)
// str is converted to num

console.log(0 == '')
console.log(0 == false)
console.log(undefined == null)
console.log(1 != '1')
console.log(1 !== '1')


console.log(null > 0)
console.log(null == 0)
console.log(null >= 0)
// comparsion operators convert null into 0 to compare with a numerical value


console.log(undefined > 0)
console.log(undefined == 0)
console.log(undefined >= 0)

console.log([] + {});
console.log({} + []);