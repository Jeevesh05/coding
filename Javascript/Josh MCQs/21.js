let a  =1;
function bar(){
    let a = 2;
    let foo = ()=> a;
    console.log(foo());
}
bar();