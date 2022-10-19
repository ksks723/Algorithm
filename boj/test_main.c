/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sku <sku@student.42seoul.kr>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/31 16:31:01 by sku               #+#    #+#             */
/*   Updated: 2022/02/14 22:57:34 by sku              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <fcntl.h>
#include <stdlib.h>
#include "get_next_line.h"

// gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c -D BUFFER_SIZE=42 && ./a.out
// gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c && ./a.out
// gcc -Wall -Wextra -Werror main.c get_next_line.c get_next_line_utils.c && ./a.out

int main(void)
{
    int fd = open("./test.txt", O_RDONLY);
    char *s;

    while ((s = get_next_line(fd)) > 0)
    {
        printf("%s", s);
        free(s);
        s = NULL;
    }
    return (0);
}
