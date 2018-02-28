/*Not optimised- very slow for large inputs*/

function sherlockAndMinimax(arr, p, q) {
	// Complete this function
	var min = 0,
		minArray = [],
		temp;
	for (var i = p; i <= q; i++) {
		/*create difference array element wise with [p,q] range*/

		temp = difference(arr, i);
		minArray[i - p] = Math.min(...temp);
		//console.log("Herer---", minArray);
	}
	var max = Math.max(...minArray);

	for (i = p; i <= q; i++) {
		/*create difference array element wise with [p,q] range*/

		temp = difference(arr, i);
		if (max == Math.min(...temp)) {
			return i;
		}
	}
}
function difference(arr, i) {
	return arr.map(x => Math.abs(x - i));
}

arr = [5, 8, 14];
console.log(sherlockAndMinimax(arr, 4, 9));

