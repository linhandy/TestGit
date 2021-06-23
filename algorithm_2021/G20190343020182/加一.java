class Solution {
public int[] plusOne(int[] digits) {
		if (digits == null) {
			return null;
		}
	    int length = digits.length;
		int [] retDigits = new int [length];
		retDigits[length -1 ] = digits[length - 1] + 1;
		for (int i = 0; i < length - 1; i++) {
			retDigits[i] = digits[i];
		}
		for (int i = length - 1; i > 0; i--) {
			if (retDigits[i] == 10) {
				retDigits[i] = 0;
				retDigits[i - 1] += 1;
			}
		}
		int [] newNetDigits = null;
		if (retDigits[0] == 10) {
			newNetDigits = new int [length + 1];
			newNetDigits[0] = 1;
			for (int i = 1; i <= length - 1; i++) {
				newNetDigits[i] = retDigits[i];
			}
			return newNetDigits;
		}
		else {
			return retDigits;
		}
	}
}