    <div class="tip">
	  <code>\dg</code> will display a list of user created and visible
	  roles. <code>\dg pattern</code> will list
	  roles matching the pattern.
	  The <code>&#43;</code> modifier will also display description.
	  The <code>S</code> modifier will also display the system roles.
      <pre><code class="hljs bash">laetitia=# \dg
                                   List of roles
 Role name |                         Attributes                         | Member of 
-----------&#43;------------------------------------------------------------&#43;-----------
 laetitia  | Superuser                                                  | {}
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test      |                                                            | {}

laetitia=# \dg&#43;
                                          List of roles
 Role name |                         Attributes                         | Member of | Description 
-----------&#43;------------------------------------------------------------&#43;-----------&#43;-------------
 laetitia  | Superuser                                                  | {}        | 
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}        | 
 test      |                                                            | {}        | 

laetitia=# \dgS
                                                                     List of roles
         Role name         |                         Attributes                         |                          Member of                           
---------------------------&#43;------------------------------------------------------------&#43;--------------------------------------------------------------
 laetitia                  | Superuser                                                  | {}
 pg_execute_server_program | Cannot login                                               | {}
 pg_monitor                | Cannot login                                               | {pg_read_all_settings,pg_read_all_stats,pg_stat_scan_tables}
 pg_read_all_settings      | Cannot login                                               | {}
 pg_read_all_stats         | Cannot login                                               | {}
 pg_read_server_files      | Cannot login                                               | {}
 pg_signal_backend         | Cannot login                                               | {}
 pg_stat_scan_tables       | Cannot login                                               | {}
 pg_write_server_files     | Cannot login                                               | {}
 postgres                  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test                      |                                                            | {} </code></pre>This feature is available
since Postgres 8.0, but has been upgraded in Postgres 8.4 to add the
<code>&#43;</code> modifier and in Postgres 9.6 to add the <code>S</code> modifier.
	</div>
