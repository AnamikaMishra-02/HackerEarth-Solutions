
# DNA Trancription 
dna=input()
new = ""
for i in dna:
    if i not in 'ATGC':
      new="Invalid Input"
      break
    else:
        if i=='A':
            new += 'U'
        elif i=='T':
            new += 'A'
        elif i=='C':
            new += 'G'
        elif i=='G':
            new += 'C'
print (new)
