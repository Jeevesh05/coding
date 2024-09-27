const searchBar = document.getElementById('search');
let count = 0;
function getData(){
    console.log("fetching data... ",++count)
}


const debounce = function(fn,d){
    let timer;
    //console.log("debounce is called")
    return function(){
        let context = this
        clearTimeout(timer);
        timer = setTimeout(()=>{
            getData.apply(context,arguments);
        },d);
    }
}

const betterFunction = debounce(getData,500);
searchBar.addEventListener('keydown',betterFunction)