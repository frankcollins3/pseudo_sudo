These are some terminal commands to remove directory to anything PSQL/postgres from the machine
{sudo: super user do. sudo is a: roles/permissions/security utility that allows for limited restriction on functionality}
{Pseudo: Call the sudo commands with a pseudo command}
similar to routing: A keyword/path of string characters will be created. If user input creates strict equality between input data and any corresponding "pseudo" command -> run the expressions.

**Example:**
char my_path[33];
fgets(my_path, sizeof(my_path), stdin);
char bin_path[20] = "/usr/local/bin/"

if (my_path == 'nopsql') {

1) Open the Terminal application. Stop the Postgres server by running the following command:
* * * sudo launchctl unload -w /Library/LaunchDaemons/org.postgresql.postgres.plist * * *

2) Remove all Postgres data files and configuration files by running the following command:
* * * sudo rm -rf /Library/PostgreSQL/ * * *

3) Remove the Postgres user account and group by running the following commands:
* * * sudo dscl . -delete /Users/postgres * * *
* * * sudo dscl . -delete /Groups/postgres * * *


4) Remove the symbolic links to the Postgres binaries by running the following commands:
// have to strcat(bin_path, 'newstring') and uninitialize / deallocate memory for string and re concatenate string to preserve bin_path 
// ${bin_path}${clusterdb} in C...

* * * sudo rm /usr/local/bin/clusterdb * * * 
* * * sudo rm /usr/local/bin/createdb * * * 
* * * sudo rm /usr/local/bin/createuser * * * 
* * * sudo rm /usr/local/bin/dropdb * * * 
* * * sudo rm /usr/local/bin/dropuser * * * 
* * * sudo rm /usr/local/bin/initdb * * * 
* * * sudo rm /usr/local/bin/pg_config * * * 
* * * sudo rm /usr/local/bin/pg_dump * * * 
* * * sudo rm /usr/local/bin/pg_dumpall * * *
* * * sudo rm /usr/local/bin/pg_restore * * * 
* * * sudo rm /usr/local/bin/postgres * * * 
* * * sudo rm /usr/local/bin/psql * * *
* * * * brew services stop postgresql * * *

5) Remove the Postgres application directory by running the following command:
* * * sudo rm -rf /Applications/Postgres.app/ * * * 

}

all the user has to do is enter "nopsql" or some other simple command that is strictly equal by IF condition comparison 
This APP that may or may not be created is just repetition in creating programs that solve problems. 

If the problem can be fixed by dragging the mouse around and clicking to exit application use and delete directory, then the problem can be fixed by creating code expressions with which to do the same 
