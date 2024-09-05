def generate_pattern(n):
    # Base case for n=0, which is a single block of the given pattern
    if n == 1:
        return [
            "###",
            "#.#",
            "###"

        ]
    
    # Recursively generate the smaller pattern for n-1
    smaller_pattern = generate_pattern(n - 1)
    smaller_size = len(smaller_pattern)
    
    # The size of the new pattern
    new_size = smaller_size * 3
    
    # Initialize the new pattern grid
    new_pattern = [[' ']*new_size for _ in range(new_size)]
    
    # Fill the 3x3 grid with the smaller pattern
    for row in range(3):
        for col in range(3):
            for i in range(smaller_size):
                for j in range(smaller_size):
                    new_pattern[row * smaller_size + i][col * smaller_size + j] = smaller_pattern[i][j]
    
    # Replace the middle block with dots
    middle_start = smaller_size
    middle_end = 2 * smaller_size
    for i in range(middle_start, middle_end):
        for j in range(middle_start, middle_end):
            new_pattern[i][j] = '.'
    
    # Convert each row back to a string
    new_pattern = ["".join(row) for row in new_pattern]
    
    return new_pattern

# Function to print the pattern
def print_pattern(n):
    pattern = generate_pattern(n)
    for row in pattern:
        print(row)
n = int(input())
print(print_pattern(n))
