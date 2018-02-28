function lonelyinteger(a){
  var count = [], len = a.length;
  
  count = [... new Array(100)].map(x => 0);
  
  for(var i = 0; i<len; i++){
    count[a[i]]++;
  }
  for(i = 0; i < 100; i++){
    if(count[i] === 1){
      return i;
    }
  }
}
console.log(lonelyinteger([0, 0, 5, 5, 1]));
