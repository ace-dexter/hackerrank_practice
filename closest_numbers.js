function quickSort(arr, low, high) {
	if (low < high) {
		pi = partition(arr, low, high);

		quickSort(arr, low, pi - 1);
		quickSort(arr, pi + 1, high);
	}
	return arr;
}

function partition(arr, low, high) {
	var i, temp;
	var pivot = arr[high];
	i = low - 1;
	for (var j = low; j < high; j++) {
		if (arr[j] <= pivot) {
			i++;
			temp = arr[j];
			arr[j] = arr[i];
			arr[i] = temp;
		}
	}
	temp = arr[high];
	arr[high] = arr[i + 1];
	arr[i + 1] = temp;

	return i + 1;
}

function closestNumbers(arr){
  var low = 0, high = arr.length-1;
  var minDiff = 0;
  var new_arr = [];
  
  arr = quickSort(arr, low, high);
  minDiff = findMinDiff(arr, high);
  
  console.log(arr.join(', '));
  
  for(var i = 0;i <= high; i++){
    if(abs(arr[i]-arr[i+1]) == minDiff){
      new_arr.push(arr[i]);
      new_arr.push(arr[i+1]);
    }
  }
  return new_arr;
}

//===============================================================
function findMinDiff(arr, high){
  var i, min = 0;
  
  min = abs(arr[0]-arr[1]);
  for(i = 1; i<=high-1; i++){
    if(abs(arr[i]-arr[i+1]) <= min){
      min = abs(arr[i]-arr[i+1]);
    }
  }
  return min;
}
function abs(x){
  if(x < 0)
    return x*(-1);
  else
    return x;
}
console.log(closestNumbers([-20, -3916237, -357920, -3620601, 7374819, -7330761, 30, 6246457, -6461594, 266854, -520, -470 ]));

