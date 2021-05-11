    <div class="tip">
	  <code>psql</code> returns 0 to the shell if it finished normally, 1 if a fatal error of
	  its own occurs, 2 if the connection
	  to the server went bad and the session was not interactive, and 3 if an
	  error occurred in a script and the variable <code>ON_ERROR_STOP</code> was set.
      <pre><code class="hljs bash">laetitia:~$ psql -c 'select * from test;'
 id | value 
----&#43;-------
  1 | test
(1 row)

laetitia:~$ echo $?
0
laetitia:~$ psql -f notExistingFile.sql
psql: error: notExistingFile.sql: No such file or directory
laetitia:~$ echo $?
1
laetitia:~$ psql -U notExistingUser
psql: error: connection to server on socket "/tmp/.s.PGSQL.5432" failed: FATAL:  role "notExistingUser" does not exist
laetitia:~$ echo $?
2
laetitia:~$ cat query.sql
\set ON_ERROR_STOP
select * from test;
test;
select * from test;
laetitia:~$ psql -f query.sql
 id | value
----&#43;-------
  1 | test
(1 row)

psql:query.sql:3: ERROR:  syntax error at or near "test"
LINE 1: test;
        ^
laetitia:~$ echo $?
3</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
