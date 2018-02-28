function mergeSort(A) {
	var len = A.length;
	var mid = Math.floor(len / 2);
	if (len < 2) {
		return A;
	}
	var left = A.slice(0, mid);
	var right = A.slice(mid);

	left = mergeSort(left);
	right = mergeSort(right);
	return merge(left, right);
}

function merge(left, right) {
	var i = 0,
		j = 0;
	var nL = left.length,
		nR = right.length,
		A = [];

	while (i < nL && j < nR) {
		if (left[i] < right[j]) {
			A.push(left[i]);
			i++;
		} else {
			A.push(right[j]);
			j++;
		}
	}

	return A.concat(left.slice(i).concat(right.slice(j)));
}

function minimumAbsoluteDifference(n, arr) {
	var result = mergeSort(arr);
	var min = Math.abs(result[0] - result[1]);
	for (var i = 1; i < result.length - 1; i++) {
		if (min >= Math.abs(result[i] - result[i + 1])) {
			min = Math.abs(result[i] - result[i + 1]);
		}
	}
	console.log(result);
	return min;
}
arr = [3, -7, 0];
console.log(minimumAbsoluteDifference(3, arr));

