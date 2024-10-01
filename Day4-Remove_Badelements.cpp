def min_operations_to_same_element(test_cases):
    results = []
    for case in test_cases:
        N, A = case
        
        frequency = {}
        for number in A:
            if number in frequency:
                frequency[number] += 1
            else:
                frequency[number] = 1
                
        
        max_frequency = max(frequency.values())
        
        
        
        min_operations = N - max_frequency
        results.append(min_operations)
    
    return results


T = int(input())
test_cases = []
for _ in range(T):
    N = int(input())
    A = list(map(int, input().split()))
    test_cases.append((N, A))


results = min_operations_to_same_element(test_cases)


for result in results:
    print(result)
