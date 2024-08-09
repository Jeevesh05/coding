//WAP to calculate area,circumferece,diameter from given array of radiuses with best practises

const radius = [3,1,2,4];

const area = function(radius){
    return Math.PI * radius*radius;
}
const circumference = function(radius){
    return 2* Math.PI * radius; 
}
const diameter = function(radius){
    return 2*radius;
}
// const calculate = function(radius,logic){
    // let output =[];
    // for(let i=0; i<radius.length; i++){
        // output.push(Math.round(logic(radius[i])));
    // }
    // return output;
// }
// console.log(calculate(radius,area));
// console.log(calculate(radius,circumference));
// console.log(calculate(radius,diameter));

// exactly like how map function works
console.log(radius.map(area));

Array.prototype.calculate = function(logic){
    const output = [];
    for(let i=0; i<this.length; i++){
        output.push(Math.round(logic(this[i])));
    }
    return output;
}
console.log(radius.calculate(area));