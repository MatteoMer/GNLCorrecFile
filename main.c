#include "get_next_line.h"
#include <stdio.h>
#include <fcntl.h>

/* WARNING: TEST NORMINETTE FIRST AND CREATE A FILE NAMED 'empty.gnl' WITH 'touch empty.gnl' */

int                main()
{
	int					fd0;
    int					fd1;
    int               	fd2;
    int               	fd3;
    char            *line;

    line = NULL;
	fd0 = 0;
    if ((fd1 = open("sample.gnl", O_RDONLY)) == -1)
    {
	        ft_putstr("error");
	        return (-1);
	    }
    if ((fd2 = open("Star_Wars.gnl", O_RDONLY)) == -1)
    {
	        ft_putstr("error");
	        return (-1);
	    }
    if ((fd3 = open("empty.gnl", O_RDONLY)) == -1)
    {
	        ft_putstr("error");
	        return (-1);
	    }
	printf("\t=============STANDARD==============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd0, &line), line);
    printf("\t=============EMPTY.GNL=============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd3, &line), line);
    printf("\t=============SAMPLE.GNL=============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("\t============STAR_WARS.GNL============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("\t=============SAMPLE.GNL=============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("\t============STAR_WARS.GNL============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd2, &line), line);
    printf("\t=============SAMPLE.GNL=============\n");
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    printf("GNL's return = %i   line : %s\n", get_next_line(fd1, &line), line);
    return (0);
}
