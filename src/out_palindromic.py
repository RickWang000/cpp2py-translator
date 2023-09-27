def size(s):
	return len(s)
def main():
	a = ""
	a= input()
	l = size(a)
	b = ""
	for i in range(l, 0, -1):
		b = b+a[i-1]
	succeeded = 1
	failed = 0
	if a==b:
		print(succeeded)
	else:
		print(failed)
if __name__ == "__main__":
	main()