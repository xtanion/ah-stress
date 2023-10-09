n = int(input("Enter number of rectangles: "))
lengths = []
widths = []

for i in range(n):
    l = int(input("length: "))
    w = int(input("width: "))

    lengths.append(l)
    widths.append(w)

print(lengths)
print(widths)

max_diag = 0
max_area = 0
for i in range(n):
    diag = lengths[i]*lengths[i] + widths[i]*widths[i]
    if diag > max_diag:
        max_diag = diag
        max_area = lengths[i]*widths[i]

print(max_area)
    