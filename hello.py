import matplotlib.pyplot as plt

def print_double_helix(rows):
    dna_bases = ['A', 'T', 'G', 'C']
    x_coords = []
    y_coords = []
    labels = []

    for i in range(rows):
        base1 = dna_bases[i % 4]
        base2 = dna_bases[(i + 2) % 4]
        x_coords.extend([i, i])
        y_coords.extend([1, -1])
        labels.extend([base1, base2])

    # Plotting the double helix
    plt.figure(figsize=(10, 6))
    for i in range(0, len(x_coords), 2):
        plt.plot([x_coords[i], x_coords[i+1]], [y_coords[i], y_coords[i+1]], 'k-')
        plt.text(x_coords[i], y_coords[i], labels[i], fontsize=12, ha='center')
        plt.text(x_coords[i+1], y_coords[i+1], labels[i+1], fontsize=12, ha='center')

    plt.title('Double Helix Structure')
    plt.xlabel('Position')
    plt.ylabel('Strand')
    plt.ylim(-2, 2)
    plt.grid(True)
    plt.show()

# Example usage
print_double_helix(10)
