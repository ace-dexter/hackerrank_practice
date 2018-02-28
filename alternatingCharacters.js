function alternatingCharacters(s) {
	var len = s.length;
	(i = 0), (j = 0), (count = 0);

	for (var i = 0; i < len; i++) {
		var temp = s[i];
		j = i;
		while (s[i] === s[j + 1]) {
			count++;
			j++;
		}
		i = j;
	}
	return count;
}

s = 'AAABBB';
console.log(alternatingCharacters(s));

