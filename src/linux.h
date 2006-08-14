#ifndef LINUX_H
#define LINUX_H

#include <glib.h>
#include <dirent.h>
#include <pwd.h>
#include <sys/types.h>
#include <sys/stat.h>

#include "types.h"

struct task get_task_details(gint pid);
GArray *get_task_list();

#endif