def ArrayGetAt(arr, index):
  return arr[index-1]

def main():
  arr = [1, 2, 3]
  first = ArrayGetAt(arr, 1)
  print(first)

if __name__ == "__main__":
  main()
