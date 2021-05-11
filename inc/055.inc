    <div class="tip">
	  The <code>psql</code> prompt can display the process ID of the backend currently
	  connected to
	  with the <code>%p</code> value.
      <pre><code class="hljs bash">laetitia=# \set PROMPT1 '%p #'
94162 #\! pgrep -fal postgres
1866 /usr/local/pgsql/bin/postgres -D /usr/local/pgsql/data
1867 postgres: logger  ptr_munge= main_stack=
1869 postgres: checkpointer  ptr_munge= main_stack=
1870 postgres: background writer  ptr_munge= main_stack=
1871 postgres: walwriter  ptr_munge= main_stack=
1872 postgres: autovacuum launcher  ptr_munge= main_stack=
1873 postgres: stats collector  ptr_munge= main_stack=
1874 postgres: logical replication launcher  ptr_munge= main_stack=
94162 postgres: laetitia laetitia [local] idle ptr_munge= main_stack=
94162 #</code></pre>This feature is available
since Postgres 9.6.
	</div>
