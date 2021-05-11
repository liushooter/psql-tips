    <div class="tip">
	  <code>\copy</code> is different than the SQL command <code>copy</code> in that the <code>\copy</code>
	  meta-command will be played from the client side without superuer
	  permissions while the <code>copy</code> SQL command needs database superuser or users
	  users who are granted one of the default roles <code>pg_read_server_files</code>,
	  <code>pg_write_server_files</code>, or <code>pg_execute_server_program</code>.
      <pre><code class="hljs bash">laetitia=# \c laetitia test
You are now connected to database "laetitia" as user "test".
laetitia=> \du
                                   List of roles
 Role name |                         Attributes                         | Member of 
-----------+------------------------------------------------------------+-----------
 laetitia  | Superuser                                                  | {}
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test      |                                                            | {}

laetitia=> \copy (select * from test) to mydata.dmp
COPY 4
laetitia=> \! cat mydata.dmp
1       test
5       blabla
6       value1
7       value2</code></pre>This feature is available
since at least Postgres 7.1.
	</div>
