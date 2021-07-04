cat /etc/passwd | awk 'NR > 10' | sed -n 'n;p' | cut -d: -f1 | sort -r | awk 'NR>= ENVIRON["FT_LINE1"] && NR<= ENVIRON["FT_LINE2"]' | paste -s -d"," - | sed 's/,/, /g' | sed 's/$/./' | tr -d '\n'
