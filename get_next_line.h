/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibenaven <ibenaven@student.42madrid.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 11:47:34 by ibenaven          #+#    #+#             */
/*   Updated: 2025/04/09 15:29:13 by ibenaven         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

#ifndef	BUFFER_SIZE
# define BUFFER_SIZE 42
   
#ifndef	MAX_FD
# define MAX_FD 1024
   
# include <unistd.h>

char	*get_next_line(int fd);

#endif
