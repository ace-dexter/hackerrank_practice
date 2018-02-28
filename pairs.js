function quickSort(arr, low, high){
  var pi = 0;
/*  var low = 0, high = arr.length - 1;*/
  if(low < high){
    pi = partition(arr, low, high);
    
    quickSort(arr, low, pi-1);
    quickSort(arr, pi+1, high);
  }
  
  return arr;
}

function partition(arr, low, high){
  var i = low - 1;
  var pivot = arr[high];
  var j = low, temp;
  while(j < high){
    if(arr[j] <= pivot){
      i++;
      temp = arr[i];
      arr[i] = arr[j];
      arr[j] = temp;
    }
    j++;
  }
  temp = arr[high];
  arr[high] = arr[i+1];
  arr[i+1] = temp;
  
  return i+1;
}
//console.log(quickSort([1,5,3,4,2], 0, 4));

function pairs(k, arr){
  var i, j, count = 0;
  var len = arr.length;
  
  arr = quickSort(arr, 0, len-1);
  
  for(i = 0;i < len - 1; i++){
    for(j = i+1; j < len ; j++){
      if(Math.abs(arr[i]-arr[j]) == k){
        count++;
        break;
      }
    }
  }
  return count;
}
console.log(pairs(2, [1,5,3,4,2]));
