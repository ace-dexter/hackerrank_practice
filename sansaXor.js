arr = [1,2,3]
console.log(arr.length%2===0?0:arr.filter((i, index) => (index%2)===0).reduce((result, x) => result^x));

[1,1].reduce((result, x) => result^x); 
