const useCallbackHell = (print ) => {
    print('1');
    setTimeout( ()=> {
        print('a');
        setTimeout(()=>{
            print('b');
            setTimeout(()=>{
                print('c');
            },0);
            print('4');
        },0);
        print('3');
    },0);
    print('2');
};
useCallbackHell(console.log );