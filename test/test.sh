if [[ $# -ne 2 ]]; then
	echo "test $1"
	gcc -Wall -Wextra -Werror $1.c ../$1/*.c defence.c -I ../$1 -o $1.o
	./$1.o
	norminette ../$1/* 
else
	echo "wrong number of parametars"
fi
