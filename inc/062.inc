    <div class="tip">
	  If a <code>\c</code> or <code>\connect</code> metacommand fails (wrong user name, access denied,
		etc.), the previous connection will be kept if psql is in interactive
		mode. But when executing a non-interactive script, processing will
		immediately stop with an error.
      <pre><code class="hljs bash">laetitia:~$ cat query.sql
\c latiatia
select * from test;
laetitia:~$ psql -f query.sql 
psql:query.sql:1: error: \connect: connection to server on socket "/tmp/.s.PGSQL.5432" failed: FATAL:  database "latiatia" does not exist
laetitia:~$ psql
psql (14devel)
Type "help" for help.

laetitia=# \c latiatia
connection to server on socket "/tmp/.s.PGSQL.5432" failed: FATAL:  database "latiatia" does not exist
Previous connection kept
laetitia=#</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
