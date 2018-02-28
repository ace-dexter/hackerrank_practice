function missingNumbers(arr, brr){
  var len1 = arr.length, len2 = brr.length;
  var count1 = [...new Array(201)].map(x=>0);
  var count2 = [...new Array(201)].map(x=>0);
  var missedList = [];
  
  pivot = arr[0];
  
  for(i = 0; i<len1; i++){
    count1[100+(arr[i]-pivot)]++;
  }
  for(i = 0; i<len2; i++){
    count2[100 + (brr[i]-pivot)]++;
  }
 
  for(i = 0; i <= 201; i++){
    if(count1[i] != count2[i]){
      missedList.push(pivot+i-100);
    }
  }
  
  return missedList;
}

console.log(missingNumbers([2,3,5,3,8,1], [5,3,8,1,1,5,2,2]));
console.log(missingNumbers([203, 204, 205, 206, 207, 208, 203, 204, 205, 206], [203, 204, 204, 205, 206, 207, 205, 208, 203, 206, 205, 206, 204]));
