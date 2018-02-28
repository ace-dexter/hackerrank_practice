function makingAnagrams(s1, s2) {
	counta = [...new Array(26)].map(x => 0);
	countb = [...new Array(26)].map(x => 0);

	var len1 = s1.length,
		len2 = s2.length,
		i,
		del = 0;

	for (i = 0; i < len1; i++) {
		counta[s1[i].charCodeAt() - 97]++;
	}
	for (i = 0; i < len2; i++) {
		countb[s2[i].charCodeAt() - 97]++;
	}
	for (i = 0; i < 26; i++) {
		if (counta[i] !== countb[i]) {
			del += Math.abs(counta[i] - countb[i]);
		}
	}
	return del;
}

s1 = 'cde';
s2 = 'abc';
console.log(makingAnagrams(s1, s2));
