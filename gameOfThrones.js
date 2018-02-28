function gameOfThrones(s){
  var len = s.length,
      i = 0, set = 0,
      count = [...new Array(26)].map(x => 0);
  for(i = 0; i < len; i++){
    count[s[i].charCodeAt() - 97]++;
  }
  for(i = 0; i < 26; i++){
    if(count[i]%2 !== 0){
      set += 1;
    }
  }
  if(set > 1){
    return "NO";
  }
  else
    return "YES";
}

console.log(gameOfThrones("cdefghmnopqrstuvw"));
