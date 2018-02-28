function decipher(n, k, s){
  res = [...new Array(n)].map(x => 0);
  var i = 0, len = s.length;
  
  for(i = 0; i < n  ; i++){
    if(i === 0){
      res[i] = parseInt(s[i]);
    }
    else if(i < k){
      res[i] = parseInt(s[i])^parseInt(s[i-1]);
    }
    else{
      res[i] = parseInt(s[i])^parseInt(s[i-1])^res[i-k];
    }
  }
  return res;
}
s = "1110100110";
console.log(decipher(7, 4, s).join(""));
