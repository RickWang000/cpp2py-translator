def size(s):
	return len(s)
def main():
	n = 0
	n= int(input())
	num = [0] *n
	for i in range(0, n, 1):
		num[i]= int(input())
	for i in range(1, n, 1):
		for j in range(0, n-i, 1):
			if num[j]>num[j+1]:
				temp = num[j+1]
				num[j+1] = num[j]
				num[j] = temp
	for i in range(0, n, 1):
		print(num[i])
if __name__ == "__main__":
	main()