function solve(a){
  var i, len = a.length;
  var rightSum = 0, leftSum = 0;
  var flag = 0;
  //taking right sum as total sum initially
  
  if(len == 1){
    flag = 1;
  }
  else{
    rightSum = calculate_sum(a, len)-a[0];
    
    for(i = 0; i < len; i++){
      leftSum = leftSum + a[i];
      rightSum = rightSum-a[i+1];
      
      if(leftSum == rightSum){
        flag = 1;
        break;
      }
    }
  }
  return flag?"YES":"NO";  
}

function calculate_sum(a, ntimes){
  var i = 0, sum = 0;
  
  for(i = 0; i < ntimes; i++){
    sum = sum + a[i];
  }
  return sum;
}

console.log(solve([1, 2, 3, 5, 2, 2, 1, 1]));
