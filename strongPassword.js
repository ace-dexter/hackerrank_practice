function strongPassword(n, password) {
	var min = 0,
		num = 0,
		upp = 0,
		low = 0,
		spec = 0,
		flagSum = 0;
	var numbers = '0123456789';
	var lower_case = 'abcdefghijklmnopqrstuvwxyz';
	var upper_case = 'ABCDEFGHIJKLMNOPQRSTUVWXYZ';
	var special_characters = '!@#$%^&*()-+';

	for (i = 0; i < n; i++) {
		if (flagSum == 4) {
			break;
		}
		if (numbers.indexOf(password[i]) !== -1) {
			num = 1;
			//console.log("here");
		} else if (lower_case.indexOf(password[i]) !== -1) {
			upp = 1;
		} else if (upper_case.indexOf(password[i]) !== -1) {
			low = 1;
			//console.log("here");
		} else if (special_characters.indexOf(password[i]) !== -1) {
			spec = 1;
		}
		flagSum = num + upp + low + spec;
	}

	//console.log(flagSum);
	if (n < 6 && flagSum === 4) {
		return 6 - n;
	} else if (n < 6) {
		return Math.max(6 - n, 4 - flagSum);
	} else if (n >= 6) {
		return 4 - flagSum;
	} else return 0;
}

console.log(strongPassword(11, '#HackerRank'));

