import unittest

def find_equi_index(inArray, numElements):
	
	sum_left = 0
	sum_right = 0
	
	for i in range(numElements):
		for j in range(i):
			sum_left += inArray[j]
		for j in range(i + 1, numElements):
			sum_right += inArray[j]
		if sum_left == sum_right:
			return i
		sum_left = 0
		sum_right = 0
		
	return -1

class TestEquiIndex(unittest.TestCase):
	def test_signelNumber(self):
		inArray = [3]
		expectedP = 0
		P = find_equi_index(inArray, len(inArray))
		self.assertEqual(expectedP, P)


if __name__ == '__main__':
	unittest.main()
