all:fout.c
	@echo compiling ...
	@gcc fout.c -o fout;\
		echo installing ...;\
		export PATH="$PATH:$(pwd)";\
		echo installed

clean:
	@echo deleting ...
	@rm -f fout;\
		echo deleted !

