build: ; gcc src/main.c -o stawp
clean: ; rm -rf stawp
perm: ; chmod +x stawp
run: ; ./stawp time && ./stawp date