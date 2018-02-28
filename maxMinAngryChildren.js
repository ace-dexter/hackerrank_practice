function angryChildren(k, arr) {
	arr.sort(function(a, b) {
		return a - b;
	});
	var N = arr.length;
	min = arr[k - 1] - arr[0];
	for (var i = 0; i < N - k + 1; i++) {
		if (min >= arr[k + i - 1] - arr[i]) {
			min = arr[k + i - 1] - arr[i];
		}
	}
	return min;
}

arr = [10, 100, 300, 200, 1000, 20, 30];

console.log(angryChildren(3, arr));
