
function permutingTwoArrays(k, A, B) {
	A.sort(function(a, b) {
		return a - b;
	});
	B.sort(function(a, b) {
		return b - a;
	});
	var i = 0,
		flag = 0;

	for (i = 0; i < A.length; i++) {
		if (A[i] + B[i] >= k) {
			flag = 1;
		} else {
			flag = 0;
			break;
		}
	}
	return flag ? 'YES' : 'NO';
}
A = [1, 2, 2, 1];
B = [3, 3, 3, 4];
k = 5;
console.log(permutingTwoArrays(k, A, B));

