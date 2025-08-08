import time

def sum_of_squares(n):
    return sum(i * i for i in range(1, n + 1))

N = 10_000_000

start = time.time()
result = sum_of_squares(N)
end = time.time()

print(f"Result: {result}")
print(f"Python Time: {end - start:.4f} seconds")
