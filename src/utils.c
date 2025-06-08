#include "../include/philo.h"

// valid philo number
int	ft_check_value(int argc, char **argv)
{
	if (argc != 5 && argc != 6)
		return (ft_putstr_fd("Invalid args number\n", 2), 1);
	if (!ft_isdigit(argv[1]) || ft_atoi(argv[1]) <= 0
		|| ft_atoi(argv[1]) > PHILO_MAX)
		return (ft_putstr_fd("Invalid philosophers number\n", 2), 1);
	if (!ft_isdigit(argv[2]) || ft_atoi(argv[2]) <= 0)
		return (ft_putstr_fd("Invalid time to die\n", 2), 1);
	if (!ft_isdigit(argv[3]) || ft_atoi(argv[3]) <= 0)
		return (ft_putstr_fd("Invalid time to eat\n", 2), 1);
	if (!ft_isdigit(argv[4]) || ft_atoi(argv[4]) <= 0)
		return (ft_putstr_fd("Invalid time to sleep\n", 2), 1);
	if (argv[5])
	{
		if (!ft_isdigit(argv[5]) || ft_atoi(argv[5]) < 0)
			return (ft_putstr_fd("Invalid number of times each philosopher must eat\n",
					2), 1);
	}
	return (0);
}