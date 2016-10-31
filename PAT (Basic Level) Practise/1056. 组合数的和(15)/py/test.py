#_*_coding:utf-8_*_

'''
给定N个非0的个位数字，
用其中任意2个数字都可以组合成1个2位的数字。
要求所有可能组合出来的2位数字的和。
例如给定2、5、8，则可以组合出：25、28、52、58、82、85，它们的和为330。
'''
def main () :
	N = input ("Plese input the Number of single digits : ")

	singleDigits = list()
	singleDigits = raw_input ("Please input the single digits : ").split()
	singleDigits = map (int , singleDigits)

	theSum = 0	#和的初始化

	for i in range (0 , N) :
		theSum = theSum + (singleDigits[i]*10 + singleDigits[i]) * (N-1)

	print theSum

if __name__ = "__main__" :
	main () 