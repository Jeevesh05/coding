const userIds = [1,2,3,4,5];
const ans = userIds.map((id,index,array)=>{
    array[index] = id+1;
})
console.log(ans[3]);

//console.log(userIds);
//return id+1;
//console.log(ans);