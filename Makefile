
all:
	@echo test1
	@make -C libft/ fclean && make -C libft/
	@echo ------libft Done
	@clang -Wall -Wextra -Werror -I libft/includes -o main.o -c main.c -ggdb3
	@echo ------main.o Done
	@clang -Wall -Wextra -Werror -I libft/includes -o get_next_line.o -c get_next_line.c -ggdb3
	@echo ------get_next_line.o Done
	@clang -o test_gnl get_next_line.o main.o -I libft/includes -L libft/ -lft
	@echo ------test_gnl Done
	@echo ------testing functi0n...
	@./test_gnl|cat -e
	@echo ------testing Done

clean:
	@/bin/rm -rf OBJ_DIR = ./libft/obj/
	@/bin/rm -rf OBJ_DIR = ./main.o
	@/bin/rm -rf OBJ_DIR = ./get_next_line.o
	@echo Cleaned object files

fclean: clean
	@/bin/rm -f ./libft/libft.a
	@echo Cleaned ./libft/libft.a

re: fclean all
