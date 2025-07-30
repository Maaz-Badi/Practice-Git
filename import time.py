import time

start_time = time.time()

for i in range(1, 10001):
    print(i)
7124
end_time = time.time()
execution_time = end_time - start_time
print(f"Execution time: {execution_time * 1000:.3f} ms")