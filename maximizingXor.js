function maximizingXor(l, r){
  var i, j;
  var max = 0;
  
  for(i = l; i <= r; i++){
    for(j = i; j <= r; j++){
      if(max < (i^j)){
        max = i^j;
      }
    }
  }
  return max;
}
console.log(maximizingXor(10, 15));
