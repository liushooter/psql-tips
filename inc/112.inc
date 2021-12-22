    <div class="tip">
	  <code>\du</code> will display a list of users. Remember that since Postgres 8.1,
		users and roles are the same thing (see <a
		  href="https://www.postgresql.org/docs/current/user-manag.html)">Postgres
		documentation</a>).<br/><br/>
	   	The <code>S</code> modifier will allow to display system roles too.
       <code>du pattern</code> will match only roles macthing the specified <code>pattern</code>. The
	   <code>+</code> modifier will display the description for each role.
      <pre><code class="hljs bash">laetitia=# \du
                                   List of roles
 Role name |                         Attributes                         | Member of 
-----------+------------------------------------------------------------+-----------
 laetitia  | Superuser                                                  | {}
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test      |                                                            | {}

laetitia=# \duS
                                                                     List of roles
         Role name         |                         Attributes                         |                          Member of                           
---------------------------+------------------------------------------------------------+--------------------------------------------------------------
 laetitia                  | Superuser                                                  | {}
 pg_database_owner         | Cannot login                                               | {}
 pg_execute_server_program | Cannot login                                               | {}
 pg_monitor                | Cannot login                                               | {pg_read_all_settings,pg_read_all_stats,pg_stat_scan_tables}
 pg_read_all_data          | Cannot login                                               | {}
 pg_read_all_settings      | Cannot login                                               | {}
 pg_read_all_stats         | Cannot login                                               | {}
 pg_read_server_files      | Cannot login                                               | {}
 pg_signal_backend         | Cannot login                                               | {}
 pg_stat_scan_tables       | Cannot login                                               | {}
 pg_write_all_data         | Cannot login                                               | {}
 pg_write_server_files     | Cannot login                                               | {}
 postgres                  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test                      |                                                            | {}

laetitia=# \du+
                                          List of roles
 Role name |                         Attributes                         | Member of | Description 
-----------+------------------------------------------------------------+-----------+-------------
 laetitia  | Superuser                                                  | {}        | 
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}        | 
 test      |                                                            | {}        | </code></pre>
This feature is available since Postgres 7.2, but has been upgraded with 
Postgres 8.4 to add the <code>+</code> modifier and in Postgres 9.6 to add the <code>S</code> modifier.
	</div>
