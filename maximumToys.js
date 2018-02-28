function maximumToys(prices, k) {
	var sum = 0,
		max_toys = 0;

	prices.sort(function(a, b) {
		return a - b;
	});
	for (var value of prices) {
		sum = sum + value;
		if (sum <= k) {
			max_toys++;
		}
		if (sum > k) {
			break;
		}
	}
	//console.log(prices);
	return max_toys;
}
prices = [1, 12, 5, 111, 200, 1000, 10];
k = 50;
console.log(maximumToys(prices, k));

