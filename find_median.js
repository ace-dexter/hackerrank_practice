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
//===============================================================
function findMedian(arr) {
	var low = 0,
		high = arr.length - 1;
	var minDiff = 0;

	arr = quickSort(arr, low, high);
	var l = arr.length;
	if (l % 2 == 1) {
		return arr[(l + 1) / 2 - 1];
	} else return (arr[l / 2 - 1] + arr[l / 2]) / 2;
}
console.log(findMedian([0, 1, 2, 4, 6, 5, 3]));

