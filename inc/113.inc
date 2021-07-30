    Since Postgres 8.1, groups and users are implemented as roles. It means there
	is not difference between <code>\dg</code> and <code>\du</code>.
    <div class="tip">
      <pre><code class="hljs bash">laetitia=# \dg
                                    List of roles
 Role name |                         Attributes                         |  Member of  
-----------+------------------------------------------------------------+-------------
 grouptest | Cannot login                                               | {}
 laetitia  | Superuser                                                  | {}
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test      |                                                            | {grouptest}

laetitia=# \du
                                    List of roles
 Role name |                         Attributes                         |  Member of  
-----------+------------------------------------------------------------+-------------
 grouptest | Cannot login                                               | {}
 laetitia  | Superuser                                                  | {}
 postgres  | Superuser, Create role, Create DB, Replication, Bypass RLS | {}
 test      |                                                            | {grouptest}</code></pre>
This feature is available since Postgres 8.1.
	</div>
